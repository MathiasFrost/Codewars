# https://www.codewars.com/kata/55983863da40caa2c900004e/coffeescript

export class NextBigger

	###
		@param {number} n
		@returns {number}
	###
	@nextBigger: (n) ->
		digits = Array.from n.toString()
			.map (s) => Number s

		index = digits.length - 1

		# If a digit is greater than the previous, we can swap it
		index-- while digits[index] <= digits[index - 1]

		# If there was none, it is already arranged in the highest possible combination
		if not index
			return index - 1

		# Split the digits at the swappable number
		left = digits[...index - 1]
		mid = digits[index - 1]
		right = digits[index..]

		# The number we want to swap is the one that is the smallest of those that are greater than mid
		candidate = right[0]
		for num in right
			if num > mid and num < candidate
				candidate = num

		# Swap the value of the first occurrence of candidate with mid
		right[right.indexOf candidate] = mid
		mid = candidate

		# Sort right side to be the smallest possible combination
		right = right.sort (a, b) => a - b

		Number(
			left.concat mid
				.concat right
				.join '')

