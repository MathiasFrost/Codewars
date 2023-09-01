// https://www.codewars.com/kata/52a89c2ea8ddc5547a000863/cpp

#include "get_loop.hpp"

[[maybe_unused]] int GetLoop::get_loop_size(Node* start_node)
{
	auto length = 1;
	auto tortoise = start_node->get_next();
	auto hare = start_node->get_next()->get_next();

	// Find the cycle, the hare and the tortoise will encounter at the cycle start
	while (tortoise != hare)
	{
		tortoise = tortoise->get_next();
		hare = hare->get_next()->get_next();
	}

	// Find the length of the cycle - count the number of step to return at the cycle beginning
	hare = tortoise->get_next();
	while (tortoise != hare)
	{
		hare = hare->get_next();
		length++;
	}
	return length;
}
