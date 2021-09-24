#include "Node.h"

Node::Node(int a, int p)
{
	data.val = a;
	data.priority = p;
	next = nullptr;
}