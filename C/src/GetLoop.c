// Created by Mathi on 2022-02-04.

#include "GetLoop.h"

int GetLoop__LoopSize(SNode* node)
{
	int length = 1;
	SNode* tortoise = node->next;
	SNode* hare = node->next->next;
	
	// Find the cycle, the hare and the tortoise will encounter at the cycle start
	while (tortoise != hare)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;
	}
	
	// Find the length of the cycle - count the number of step to return to the cycle beginning
	hare = tortoise->next;
	while (tortoise != hare)
	{
		hare = hare->next;
		length++;
	}
	
	return length;
}
