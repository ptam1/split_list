#include "node.h"
#include <iostream>

using namespace std;

node::~node()
{
	delete [] this->link_field;
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
