#ifndef PRIORITYQ_H
#define PRIORITYQ_H
#include "Node.h"

class PriorityQ
{
private:
	Node* myFront;
	Node* myBack;

public:
	PriorityQ();
	~PriorityQ();
	void enqueue(int, int);
	void dequeue();
	bool empty();
	Node front();
	void display();
};
#endif // !PRIORITYQ_H
