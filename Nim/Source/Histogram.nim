import std/tables
import std/strutils

type Histogram = ref object of RootObj

proc hist*(s: string): string =
	
	var count = initTable[char, int]()
	for letter in s:

		count[letter] = if hasKey(count, letter): count[letter] + 1 else: 1

	res: seq[string]
	for letter in "uwxz":
	if hasKey(count, letter) and count[letter] > 0:

		let num = alignLeft(intToStr(count[letter]), 6)
		let stars = '*'.repeat(count[letter])
		res.add(letter & "  " & num & stars)

	return join(res, "\n")
