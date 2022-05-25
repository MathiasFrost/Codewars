//
// Created by Mathi on 2022-02-04.
//

#ifndef C_GETLOOP_H
#define C_GETLOOP_H

typedef struct node_t Node;

struct node_t
{
	Node* next;
};

int loop_size(Node* node);

#endif //C_GETLOOP_H
