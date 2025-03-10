#include "node.cpp"
using namespace std;

// https://leetcode.com/problems/linked-list-cycle
/*
	- Description:
	Given head, the head of a linked list,
	determine if the linked list has a cycle in it.

	There is a cycle in a linked list if there is some node in the list
	that can be reached again by continuously following the next pointer.
	Internally, pos is used to denote the index of the node that tail's next pointer is connected to.
	Note that pos is not passed as a parameter.

	Return true if there is a cycle in the linked list.
	Otherwise, return false.

	- Constraints:
	The number of the nodes in the list is in the range [0, 104].
	-105 <= Node.val <= 105
	pos is -1 or a valid index in the linked-list.

	(?) Follow up: Can you solve it using O(1) (i.e. constant) memory?
*/
// Floyd's cycle-finding algorithm
class Solution
{
public:
	bool hasCycle_ver01(ListNode* head);
	bool hasCycle_ver02(ListNode* head);
};


bool Solution::hasCycle_ver01(ListNode* head)
{
	if (head == nullptr || head->next == nullptr) {
		return false; // No cycle if list is empty or has only one node
	}

	ListNode* slow = head;
	ListNode* fast = head;

	while (fast != nullptr && fast->next != nullptr) {
		slow = slow->next;      // Move slow pointer one step
		fast = fast->next->next; // Move fast pointer two steps

		if (slow == fast) {
			return true; // Cycle detected
		}
	}

	return false;
}

bool Solution::hasCycle_ver02(ListNode* head) {
	if (head == nullptr || head->next == nullptr) return false;

	ListNode* current = head;
	ListNode* after = head->next;
	while (after)
	{
		if (after == nullptr || after->next == nullptr) return false;
		if (after == current) return true;
		after = after->next->next;
		current = current->next;
	}

	return false;
}