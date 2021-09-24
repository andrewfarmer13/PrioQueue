#ifndef NODE_H
#define NODE_H

struct Item
{
	int priority;
	int val;

};

class Node
{
public:
	Item data;
	Node* next;
	Node(int, int);
};
#endif // !NODE_H

