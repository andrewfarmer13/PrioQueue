#include "PriorityQ.h"
#include <iostream>

int main()
{
	PriorityQ* pq = new PriorityQ();

	if (pq->empty() == true)
	{
		std::cout << "The current Queue is Empty" << std::endl << std::endl;
	}

	pq->enqueue(19, 3);
	pq->enqueue(3, 6);
	pq->enqueue(44, 2);
	pq->enqueue(27, 1);
	pq->display();
	std::cout << std::endl << "Highest Priority: ";
	std::cout << pq->front().data.priority << ", " << pq->front().data.val << std::endl << std::endl;
	pq->dequeue();
	pq->dequeue();
	pq->display();
	std::cout << std::endl << "New Highest Priority: ";
	std::cout << pq->front().data.priority << ", " << pq->front().data.val << std::endl << std::endl;
	pq->display();

	delete pq;


	return 0;
}