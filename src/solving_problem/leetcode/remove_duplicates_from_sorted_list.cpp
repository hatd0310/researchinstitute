#include <iostream>
#include <unordered_set>
#include "node.cpp"

using namespace std;

// https://leetcode.com/problems/remove-duplicates-from-sorted-list
/*
    - Description:
	Given the head of a sorted linked list,
    delete all duplicates such that each element appears only once.
    Return the linked list sorted as well.
    
    Input: head = [1,1,2,3] = [1] -> [1] -> [2] -> [3]
    Output: [1,2,3]

    Input: head = [1,1,2,3,3] = [1] -> [1] -> [2] -> [3] -> [3]
    Output: [1,2,3]

	- Constraints:
	+ The number of nodes in the list is in the range [0, 300].
    + -100 <= Node.val <= 100
    + The list is guaranteed to be sorted in ascending order. 
    
    
*/
class Solution {
    public:
        ListNode* deleteDuplicates_rev01(ListNode* head);
        ListNode* deleteDuplicates_rev02(ListNode* head);

};

ListNode* Solution::deleteDuplicates_rev01(ListNode* head) {
    ListNode* temp = head;

    while (temp->next != nullptr) {

        if (temp->val <= temp->next->val) {
            temp->next = temp->next->next;
        } else {
            temp = temp->next;
        }

    }

    return head;
}

ListNode* Solution::deleteDuplicates_rev02(ListNode* head) {

}