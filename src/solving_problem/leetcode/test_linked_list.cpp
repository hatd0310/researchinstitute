#include "linked_list.cpp"

int main() {
	LinkedList_RawNode<int> list(1);
	list.append(2);
	list.append(3);
	list.prepend(0);
	list.insert(2, 5);
	list.print_linked_list();
	list.get(2);
	list.set(2, 6);
	list.print_linked_list();

	return 0;
}