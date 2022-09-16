// https://www.codewars.com/kata/52a89c2ea8ddc5547a000863/c

#include "GetLoop.h"

int GetLoop_LoopSize(Node* node)
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
	
	// Find the length of the cycle - count the number of step to return to the cycle beginning
	hare = tortoise->next;
	while (tortoise != hare)
	{
		hare = hare->next;
		length++;
	}
	
	return length;
}
