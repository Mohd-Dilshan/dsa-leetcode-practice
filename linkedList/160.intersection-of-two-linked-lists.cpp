/*
 * @lc app=leetcode id=160 lang=cpp
 *
 * [160] Intersection of Two Linked Lists
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include<set>
using namespace std;
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // pproach Used: Hashing
        // Time Complexity: O(m + n)
        // Space Complexity: O(m) (extra space used for storing nodes in a set)
        set<ListNode*>st;
        ListNode* temp = headA;

        while(temp!=nullptr) {
            st.insert(temp);
            temp = temp->next;
        }
        temp = headB;
        while(temp != nullptr) {
            if(st.find(temp) != st.end()) {
                return temp;
            }
            temp = temp -> next;
        }
        return nullptr ;


    }
};
// @lc code=end

