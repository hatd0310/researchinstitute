#include <iostream>
#include "node.cpp"

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
		ListNode* mergeTwoLists_rev02(ListNode* list1, ListNode* list2);
};

ListNode* Solution::mergeTwoLists_rev01(ListNode* list1, ListNode* list2) {
    if (list1 == nullptr) return list2;
    if (list2 == nullptr) return list1;

    // ListNode* ptr = list1->val < list2->val ? list1 : list2; // error time limit
    ListNode* ptr = list1;
    if(list1->val > list2->val) {
        ptr = list2;
        list2 = list2->next;
    } else {
        list1 = list1->next;
    }
    
    ListNode* curr = ptr;
    
    while (list1 && list2) {
        
        if (list1->val <= list2->val) {
            curr->next=list1;
            list1 = list1->next;
        } else {
            curr->next=list2;
            list2 = list2->next;
        }

        curr = curr->next;
    }

    if (list1) {
        curr->next=list1;
    }
    
    if (list2) {
        curr->next=list2;
    }

    return ptr;
}

// recursion
ListNode* Solution::mergeTwoLists_rev02(ListNode* list1, ListNode* list2) {
    if (list1 == nullptr) return list2;
    if (list2 == nullptr) return list1;

    if (list1->val < list2->val) {
        list1->next = mergeTwoLists(list1->next, list2);
        return list1;
    } else {
        list2->next = mergeTwoLists(list1, list2->next);
        return list2;
    }
}