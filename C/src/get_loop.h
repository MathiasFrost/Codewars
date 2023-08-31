// https://www.codewars.com/kata/52a89c2ea8ddc5547a000863/c

#pragma once

typedef struct node node_t;
struct node
{
	node_t* next;
};

__attribute__((unused)) int get_loop_loop_size(node_t * node);
