#include <iostream>
#include "node.h"

using namespace std;

void split_list(node* head_ptr, const node::value_type &splittingValue);

int main()
{
	 node* tail = new node(7);
	node* six = new node(6, tail);
	node* five = new node(5, six);
	node* four = new node(4, five);
	node* three = new node(3,four);
	node* two = new node(2, three);
	node* one = new node(1, two);
	
	
	cout << "The Original Linked List is: " << " ";
	print(one);
	cout << " " << endl;
	
	split_list(one, 5);
	
	return 0;
}



void split_list(node* head_ptr, const node::value_type &splittingValue)
{
	const node* cursor;

	node* firstList = new node;
	node* secondList = new node;
	node* previous = new node;
	
	for(cursor = head_ptr; cursor != NULL; cursor = cursor->link())
	{		
		if(cursor->data() < splittingValue)
		{		
			previous = firstList;
			list_insert(previous, cursor->data());			
	    }
		else
		{
			previous = secondList;
			list_insert(previous, cursor->data());			
		}
	}	 	
		
	    cout << "The First Linked List is: " << " ";
		for(node* i = firstList; i != NULL; i = i->link())
	{
		cout << i->data() << " " << " ";
	}
		cout << " " << endl;
		cout << "The Second Linked List is: " << " ";
		for(node* i = secondList; i != NULL; i = i->link())
	{
		cout << i->data() << " " << " ";
	}
}
