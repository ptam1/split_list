#include "node.h"
#include <iostream>

using namespace std;

node::~node()
{
	delete [] this->link_field;
}

void split_list(node* head_ptr, const node::value_type &splittingValue)
{
	const node* cursor;
	node* previousNode = NULL;
	
	for(cursor = head_ptr; cursor != NULL; cursor = cursor->link())
	{
		if(cursor->data() < splittingValue)
		{
			node* newNode = new node(cursor->data(), previousNode);
	        newNode = previousNode;
		}
	
		
	}
}

void print(node* head_ptr)
{
	for(node* i = head_ptr; head_ptr != NULL; i = i->link())
	{
		cout << i->data() << " " << " ";
	}
}