// Created by Mathi on 2022-02-04.

#ifndef C_GETLOOP_H
#define C_GETLOOP_H

typedef struct Node SNode;

struct Node
{
	SNode* next;
};

int GetLoop__LoopSize(SNode* node);

#endif // C_GETLOOP_H
