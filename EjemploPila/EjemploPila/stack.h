#pragma once

#include "node.h"

class stack
{
public:
	stack();
	~stack();
	void push(int);
	int pop();
	bool isEmpty();

private:
	node* top;
};

