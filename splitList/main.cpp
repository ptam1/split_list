#include <iostream>
#include "node.h"

using namespace std;

int main()
{
	node* tail = new node(7);
	node* six = new node(6, tail);
	node* five = new node(5, six);
	node* four = new node(4, five);
	node* three = new node(3, four);
	node* two = new node(2, three);
	node* one = new node(1, two);
	
	cout << "The Original Linked List is: " << " ";
	print(one);
	cout << " " << endl;
	
	node* firstList;
	node* secondList;


	
	split_list(one, 5);

//	cout << "The Second Linked List is: " << " " ;
	//print()
	
	return 0;
}
