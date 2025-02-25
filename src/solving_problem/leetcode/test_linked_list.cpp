#include "linked_list.cpp"

int main()
{

	LinkedList_RawNode<int>* ll = new LinkedList_RawNode<int>(11);

	ll->append(12);


	ll->print_linked_list();
	return 0;
}
