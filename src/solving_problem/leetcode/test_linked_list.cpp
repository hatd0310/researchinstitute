#include "singly_linked_list.cpp"

int main()
{

    LinkedList *sll = new LinkedList(1);
    sll->append(21);
    sll->append(3);
    sll->append(4);
    sll->append(5);
    sll->append(1);
    sll->append(7);
    sll->append(8);
    sll->append(22);

    sll->print_list();

    return 0;
}
