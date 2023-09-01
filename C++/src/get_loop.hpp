// https://www.codewars.com/kata/52a89c2ea8ddc5547a000863/cpp

#pragma once

class Node
{
public:
	Node* get_next()
	{
		return this->next;
	}

private:
	Node* next;
};

class GetLoop
{
public:
	[[maybe_unused]] static int get_loop_size(Node* start_node);
};
