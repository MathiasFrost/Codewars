// https://www.codewars.com/kata/52a89c2ea8ddc5547a000863/cpp

#pragma once

class Node
{
public:
	Node* getNext()
	{
		return this->next;
	}

private:
	Node* next;
};

class GetLoop
{
public:
	int GetLoopSize(Node* startNode);
};
