
#include "linked_list.cpp"

int main()
{

	LinkedList_RawNode<int> *ll_rn = new LinkedList_RawNode<int>(0);
	ll_rn->append(1);
	ll_rn->append(2);
	ll_rn->append(3);
	ll_rn->append(4);
	ll_rn->append(5);
	ll_rn->append(6);
	ll_rn->append(2);
	ll_rn->append(1);
	// ll_rn->print_linked_list();

	ll_rn->insert(0, 10);
	ll_rn->print_linked_list();

	return 0;
}
