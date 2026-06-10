/*
 * @lc app=leetcode id=234 lang=cpp
 *
 * [234] Palindrome Linked List
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
    bool isPalindrome(ListNode* head) {

        ListNode* p = head;

        stack<int> s;

        while(p!=NULL){

            s.push(p->val);

            p = p->next;

        }

        while(head && !s.empty()){

            if(head->val != s.top()) return false;

            head = head->next;

            s.pop();

        }

        return true;

    }
};
// @lc code=end

