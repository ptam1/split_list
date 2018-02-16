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

	node* firstList = new node;;
	node* secondList = new node;
	node* previous = new node;
	
	for(cursor = head_ptr; cursor != NULL; cursor = cursor->link())
	{
		
		if(cursor->data() < splittingValue)
		{
			if(firstList->data() == NULL)
			{
				list_head_insert(firstList, cursor->data());
			}
			
			else
			{
			previous = firstList;
			list_insert(previous, cursor->data());
			}
		}
		else
		{
			if(secondList->data() == NULL)
			{
				list_head_insert(secondList, cursor->data());
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
	
	cout << "The Second Linked List is: " << " ";
	for(node* i = secondList; i != NULL; i = i->link())
	{
		cout << i->data() << " " << " ";
	}
}
}

void print(node* head_ptr)
{
	for(node* i = head_ptr; i != NULL; i = i->link())
	{
		cout << i->data() << " " << " ";
	}
}


 void list_insert(node *previous_ptr, const node::value_type &entry) 
 {
        node *insert_ptr;

        insert_ptr = new node(entry, previous_ptr->link());
        previous_ptr->set_link(insert_ptr);
}

void list_head_insert(node *&head_ptr, const node::value_type &entry) 
{
        head_ptr = new node(entry, head_ptr);
}