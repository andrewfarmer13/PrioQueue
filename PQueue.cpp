#include "PriorityQ.h"
#include <iostream>

PriorityQ::PriorityQ()
{
	myFront = NULL;
	myBack = NULL;
}

PriorityQ::~PriorityQ()
{
	Node* temp = myFront;

	while (temp != NULL)
	{
		Node* save = temp;
		temp = temp->next;
		delete save;
	}
}
bool PriorityQ::empty()
{
	return myFront == NULL;
}

void PriorityQ::enqueue(int val, int p)
{
	Node* newptr = new Node(val, p);

	if (myFront == NULL)
	{
		myFront = newptr;
		myBack = newptr;
	}
	else if (newptr->data.priority < myFront->data.priority)
	{
		newptr->next = myFront;
		myFront = newptr;
	}
	else if (newptr->data.priority == myFront->data.priority)
	{
		newptr->next = myFront->next;
		myFront->next = newptr;
	}
	else//Works just like a linked list
	{
		Node* preptr = myFront;

		while (preptr->next != NULL && preptr->next->data.priority <= p)//Originally had preptr->data.priority
		{
			preptr = preptr->next;
		}
		newptr->next = preptr->next;
		preptr->next = newptr;
		myBack = newptr;
	}


}

void PriorityQ::dequeue()
{

	Node* temp = myFront;
	myFront = myFront->next;
	delete temp;



}

Node PriorityQ::front()
{
	return *myFront;
}


void PriorityQ::display()
{
	Node* temp = myFront;

	while (temp != NULL)
	{
		std::cout << temp->data.priority << ", " << temp->data.val << std::endl;
		temp = temp->next;
	}

}