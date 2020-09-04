#include "stack.h"

stack::stack(): top(nullptr) {
	
}

stack::~stack() {
	while (top != nullptr)
	{
		pop();
	}
}

void stack::push(int number) {
	node* aux = new node(number, nullptr);

	if (isEmpty()) {
		top = aux;
	}
	else {
		aux->setNext(top);
		top = aux;
	}
}

int stack::pop() {
	node* aux;
	int value;

	if (top == nullptr)
		return 0;

	aux = top;

	if (aux->getNext() != nullptr) {
		top = aux->getNext();
		value = aux->getNumber();
		delete aux;
		return value;
	}
	else {
		value = top->getNumber();
		delete top;
		return value;
	}
}

bool stack::isEmpty() {
	if (top == nullptr)
		return true;
	return false;
}
