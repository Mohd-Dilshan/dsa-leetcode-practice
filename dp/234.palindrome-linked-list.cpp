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
#include<stack>
using namespace std;
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> s;
        ListNode* p = head;

        while(p!=nullptr) {
            s.push(p->val);
            p = p->next;
        }
        while(head && !s.empty()) {
            if (s.top() != head->val) return false;
            else {
                s.pop();
                head = head->next;
            }
        }
        return true;
    }
};
// @lc code=end

