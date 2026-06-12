/*
 * @lc app=leetcode id=25 lang=cpp
 *
 * [25] Reverse Nodes in k-Group
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        int count = 0;

        // check k node exist or not
        while(count < k) {
            if(temp == nullptr) {
                return head;
            }
            temp = temp->next;
            count++;
        }
        //recursive call 
        ListNode* prevNode = reverseKGroup(temp, k);

        // reverse current group
        temp = head; count = 0;
        while(count < k ) {
            ListNode* next = temp -> next;
            temp->next = prevNode;

            prevNode = temp;
            temp = next;

            count++;
        }
        return prevNode;
    }
};
// @lc code=end

