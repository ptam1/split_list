#include <iostream>

int main()
{
	node* tail = new node(4.71);
	node* five = new node(8.99, tail);
	node* four = new node(2.31, five);
	node* three = new node(1.15, four);
	node* two = new node(3.33, three);
	node* one = new node(6.42, two);
	
	cout << "The Original Linked List is: " << " ";
	print(one);
	
	split_list(one, 5);
	cout << "The Original Linked List is: " << " ";

	
	return 0;
}
