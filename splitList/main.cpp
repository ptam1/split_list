#include <iostream>
#include "node.h"

using namespace std;

void split_list(node* head_ptr, int splittingValue);



int main()
{
	node* tail = new node(7);
	node* six = new node(6, tail);
	node* five = new node(4, six);
	node* four = new node(14, five);
	node* three = new node(9,four);
	node* two = new node(2, three);
	node* one = new node(1, two);
	

	
	cout << "The Original Linked List is: " << " ";
	print(one);
	cout << " " << endl;
	split_list(one, 5);


	return 0;
}



void split_list(node* head_ptr, int splittingValue)
{
	node* current;
	node* firstList = new node;
	node* secondList = new node;

for(current = head_ptr; current != NULL; current = current->link())
	{	
		if(current->data() < splittingValue)
		{
			list_insert(firstList, current->data());	
		}	
        else
		{		
			list_insert(secondList, current->data());	
		}				
	}

		  cout << "The First Linked List is: " << " ";
		for(node* i = firstList->link(); i != NULL; i = i->link())
	{
		cout << i->data() << " " << " ";
	}
		cout << " " << endl;
		cout << "The Second Linked List is: " << " ";
		for(node* a = secondList->link(); a != NULL; a = a->link())
	{
		cout << a->data() << " " << " ";
	}   
}



  