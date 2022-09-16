# https://www.codewars.com/kata/55983863da40caa2c900004e/python

class NextBigger:

	@staticmethod
	def next_bigger(n):

		digits = [char for char in str(n)]
		index = len(digits) - 1

		# If a digit is greater than the previous, we can swap it
		while index > 0 and digits[index] <= digits[index - 1]:
			index -= 1

		# If there was none, it is already arranged in the highest possible combination
		if index < 1:
			return -1

		# Split the digits at the swappable number
		left = digits[:index - 1]
		mid = digits[index - 1]
		right = digits[index:]

		# The number we want to swap is the one that is the smallest of those that are greater than mid
		candidate = min(filter(lambda num: num > mid, right))

		# Swap the value of the first occurrence of candidate with mid
		right[right.index(candidate)] = mid
		mid = candidate

		# Sort right side to be the smallest possible combination
		right.sort()

		return int("".join(left + [mid] + right))
