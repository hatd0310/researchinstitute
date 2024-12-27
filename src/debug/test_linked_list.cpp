#include <iostream>
#include <unordered_set>
#include "../problems_solving/leetcode/doubly_linked_list.cpp"
#include "../problems_solving/leetcode/singly_linked_list.cpp"

int main() {
	/*
		===== Singly Linked List =====
	*/

	/*
	// input: 1 -> 2 -> 3 -> 2 -> 4 -> 5 -> 3 -> 7 -> 5 -> 9 -> 9 -> nullptr
	// output: 1 -> 2 -> 3 -> 4 -> 5 -> 7 -> 9 -> nullptr
	LinkedList list(1);
	list.append(2);
	list.append(3);
	list.append(2);
	list.append(4);
	list.append(5);
	list.append(3);
	list.append(7);
	list.append(5);
	list.append(9);
	list.append(9);

	list.remove_duplicates_use_set();
	*/

	// length = 11 index_max = 10
	/*
	LinkedList list(1);
	list.append(2);
	list.append(3);
	list.append(4);
	list.append(5);
	list.append(6);
	list.append(7);
	list.append(8);
	list.append(9);
	list.append(10);
	list.append(11);

	list.print_list();
	list.reverse_between(1, 4);
	*/


	/*
		===== Doubly Linked List =====
	*/
	DoublyLinkedList* dll = new DoublyLinkedList(1);
    dll->append(21);
    dll->append(3);
    dll->append(4);
    dll->append(5);
    dll->append(1);
    dll->append(7);
    dll->append(8);
    dll->append(22);

    dll->print_list();
    dll->get(1);    
    
	return 0;
}
