//
// Created by Mathi on 2022-02-04.
//

#include "GetLoop.h"

int loop_size(Node* node)
{

	int length = 1;
	Node* tortoise = node->next;
	Node* hare = node->next->next;

	// Find the cycle, the hare and the tortoise will encounter at the cycle start
	while (tortoise != hare)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;
	}

	// Find the lenght of the cycle - count the number of step to return at the cycle beginning
	hare = tortoise->next;
	while (tortoise != hare)
	{
		hare = hare->next;
		length++;
	}

	return length;
}
