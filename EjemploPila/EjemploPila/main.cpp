#include <iostream>


#include "stack.h"

using std::cout;


int main() {

	stack *s1 = new stack();

	s1->push(5);
	s1->push(10);

	cout << s1->pop() << ", ";
	cout << s1->pop() << ", ";


	return 0;
}