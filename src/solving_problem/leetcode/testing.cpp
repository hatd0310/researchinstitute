#include <iostream>


struct ListNode
{
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
};


bool has_cycle(ListNode* head)
{
	if (head == nullptr || head->next == nullptr)
	{
		return false;
	}


	ListNode* slow = head; // run one by one node
	ListNode* fast = head->next; // interation list

	while (fast->next != nullptr) {

		if (fast->next == slow) return true;
		fast = fast->next;
		slow = slow->next;
	}

	return false;
}

void printList(ListNode* head) {
	ListNode* temp = head;
	while (temp != nullptr)
	{
		std::cout << temp->val << "->";
		temp = temp->next;
	}

	std::cout << "" << std::endl;
}
// argc: argument count
// argv: argument vector
int main(int argc, char* argv[])
{

	ListNode* a = new ListNode(10);
	ListNode* b = new ListNode(20);
	ListNode* c = new ListNode(30);
	ListNode* d = new ListNode(40);
	ListNode* e = new ListNode(40);
	ListNode* f = new ListNode(40);

	a->next = b;
	b->next = a; // 
	c->next = d;
	d->next = e;
	e->next = f;
	f->next = b; // 

	std::cout << "Has Cycle: " << (has_cycle(a) ? "true" : "false") << std::endl;

	return 0;
}
