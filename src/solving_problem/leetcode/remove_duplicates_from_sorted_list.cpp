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

class Solution
{
public:
    ListNode *deleteDuplicates_rev01(ListNode *head);
    ListNode *deleteDuplicates_rev02(ListNode *head);
};

ListNode *Solution::deleteDuplicates_rev01(ListNode *head)
{
    ListNode *temp = head;
    ListNode *current = head;
    // 1 -> 1 -> 21 -> 1 -> 1 -> 1 -> 1 -> 1 -> nullptr
    while (current != nullptr && current->next != nullptr)
    {
        if (current->val == current->next->val)
        {
            temp = current->next;
            current->next = current->next->next;
            delete temp;
        }
        else
        {
            current = current->next;
        }
    }

    return head;
}

ListNode *deleteDuplicates_rev02(ListNode *head)
{
}