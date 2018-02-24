#include "node.h"
#include <iostream>

using namespace std;



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


size_t list_length(const node *head_ptr)
    // Library facilities used: cstdlib
    {
        const node *cursor;
        size_t answer;

        answer = 0;
        for (cursor = head_ptr; cursor != NULL; cursor = cursor->link())
            ++answer;

        return answer;
    }
