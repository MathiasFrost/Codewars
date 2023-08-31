<?php

class PlayPass
{
	public static function playPass(string $s, int $n): string
	{
		for ($i = 0; $i < strlen($s); $i++) {
			$s[$i] = self::ShiftChar($s[$i], $n);
			$s[$i] = self::ComplementBy9($s[$i]);
			$s[$i] = self::DownCaseOdd($s[$i], $i);
		}

		return strrev($s);
	}

	private static function ShiftChar(string $input, int $n): string
	{
		if (ctype_lower($input)) return chr(ord('a') + (ord($input) - ord('a') + $n) % 26);
		if (ctype_upper($input)) return chr(ord('A') + (ord($input) - ord('A') + $n) % 26);
		return $input;
	}

	private static function ComplementBy9(string $input): string
	{
		if (ctype_digit($input)) return chr(ord('9') - ord($input) + ord('0'));
		return $input;
	}

	private static function DownCaseOdd(string $input, int $i): string
	{
		return $i % 2 != 0 ? strtolower($input) : $input;
	}
}
