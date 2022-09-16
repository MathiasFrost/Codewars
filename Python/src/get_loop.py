# https://www.codewars.com/kata/52a89c2ea8ddc5547a000863/python

class GetLoop:

	@staticmethod
	def loop_size(node):
		length = 1
		tortoise = node.next
		hare = node.next.next

		# Find the cycle, the hare and the tortoise will encounter at the cycle start
		while tortoise != hare:
			tortoise = tortoise.next
			hare = hare.next.next

		# Find the lenght of the cycle - count the number of step to return at the cycle beginning
		hare = tortoise.next
		while tortoise != hare:
			hare = hare.next
			length += 1

		return length
