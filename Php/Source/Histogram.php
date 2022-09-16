<?php

class Histogram
{
	public static function hist(string $s): string
	{
		$count = [];
		foreach (str_split($s) as $letter)
		{
			$count[$letter] = isset($count[$letter]) ? $count[$letter] + 1 : 1;
		}
		$res = [];
		foreach (['u', 'w', 'x', 'z'] as $letter)
		{
			if (isset($count[$letter]))
			{
				$value = $count[$letter];
				$res[] = sprintf('%s  %-5d %s', $letter, $value, str_repeat('*', $value));
			}
		}

		return join("\n", $res);
	}
}
