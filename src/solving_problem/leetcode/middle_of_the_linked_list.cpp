#include "node.cpp"
using namespace std;
// https://leetcode.com/problems/middle-of-the-linked-list/
/*
	- Description:
	Given the head of a singly linked list,
	return the middle node of the linked list.
	If there are two middle nodes, return the second middle node.

	- Constraints:
	The number of nodes in the list is in the range [1, 100].
	1 <= Node.val <= 100
*/
class Solution {
public:
	// tortoise and hare approach
	ListNode* middleNode_ver01(ListNode* head)
	{
		// If list is empty, return nullptr
		if (head == nullptr) return nullptr;

		// Initialize two pointers at head
		ListNode* slow = head;  // Moves one step at a time
		ListNode* fast = head;  // Moves two steps at a time

		// Loop until fast reaches end or can't move two steps
		while (fast != nullptr && fast->next != nullptr) {
			fast = fast->next->next;  // Move 2 steps
			slow = slow->next;        // Move 1 step
		}

		// When fast reaches end, slow will be at middle
		return slow;
	}

	ListNode* middleNode_ver02(ListNode* head)
	{
		
	}

	
};