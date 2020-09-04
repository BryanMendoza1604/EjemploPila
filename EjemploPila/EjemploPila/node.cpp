#include "node.h"

node::node(int number, node* next) : number(number), next(next){

}

node::~node() {

}

int node::getNumber() {
	return number;
}

node* node::getNext() {
	return next;
}

void node::setNumber(int number) {
	this->number = number;
}

void node::setNext(node* next) {
	this->next = next;
}