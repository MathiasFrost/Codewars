//
// Created by Mathi on 2022-02-04.
//

#ifndef CPP_GETLOOP_HPP
#define CPP_GETLOOP_HPP

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

#endif //CPP_GETLOOP_HPP
