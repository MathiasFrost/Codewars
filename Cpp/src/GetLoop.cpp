//
// Created by Mathi on 2022-02-04.
//

#include "GetLoop.hpp"

int GetLoop::GetLoopSize(Node* startNode)
{
	auto length = 1;
	auto tortoise = startNode->getNext();
	auto hare = startNode->getNext()->getNext();

	// Find the cycle, the hare and the tortoise will encounter at the cycle start
	while (tortoise != hare)
	{
		tortoise = tortoise->getNext();
		hare = hare->getNext()->getNext();
	}

	// Find the lenght of the cycle - count the number of step to return at the cycle beginning
	hare = tortoise->getNext();
	while (tortoise != hare)
	{
		hare = hare->getNext();
		length++;
	}

	return length;
}
