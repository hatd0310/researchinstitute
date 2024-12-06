#include <iostream>
#include "node.cpp"


using namespace std;
// https://leetcode.com/problems/merge-two-sorted-lists
/*
	- Description:
	You are given the heads of two sorted linked lists list1 and list 2.
	Merge the two lists into one sorted list.
	The list should be made by splicing together the nodes of the first two lists.
	Return the head of the merged linked list.
	
	- Constraints:
	+ The number of nodes in both lists is in the range [0, 50].
	+ -100 <= Node.val <= 100.
	+ Both list1 and list2 are sorted in non-decreasing order.
*/
class Solution {
    public:
		ListNode* mergeTwoLists_rev01(ListNode* list1, ListNode* list2);
};

ListNode* Solution::mergeTwoLists_rev01(ListNode* list1, ListNode* list2) {
	if (list1 == nullptr) return list2;
	if (list2 == nullptr) return list1;
	
	ListNode* 
}


int main() {
	
	Solution solution;
	

	return 0;
}
