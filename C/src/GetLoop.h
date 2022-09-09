// https://www.codewars.com/kata/52a89c2ea8ddc5547a000863/c

#pragma clang diagnostic push
#pragma ide diagnostic ignored "OCUnusedGlobalDeclarationInspection"
#pragma once

typedef struct INode Node;

struct INode
{
	Node* next;
};

int GetLoop_LoopSize(Node* node);

#pragma clang diagnostic pop