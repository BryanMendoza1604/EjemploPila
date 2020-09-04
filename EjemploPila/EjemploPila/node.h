#pragma once
class node
{
public:
	node(int, node*);
	~node();
	int getNumber();
	node* getNext();
	void setNumber(int);
	void setNext(node*);

private:

	int number;
	node* next;

};

