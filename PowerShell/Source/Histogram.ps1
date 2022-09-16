function hist($s)
{
	$count = @{ }
	foreach ($letter in $s.ToCharArray())
	{
		$count[$letter]++
	}
	$res = @()
	foreach ($letter in 'uwxz'.ToCharArray())
	{
		$value = $count[$letter];
		if ($value)
		{
			$str = [String]::Format("{0}  {1,-5} {2}", $letter, $value, [String]::new('*', $value))
			$res += $str
		}
	}
	return [String]::Join("\n", $res)
}
