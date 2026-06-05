/*
 * @lc app=leetcode id=143 lang=cpp
 *
 * [143] Reorder List
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
    // approach -1
    // ListNode* reverseLL(ListNode* head) {

    //     if(head == nullptr || head->next == nullptr) {
    //         return head;
    //     }
    //     ListNode* last = reverseLL(head->next);
    //     head->next->next = head;
    //     head -> next = nullptr;
    //     return last;
    // }

    // void reorderList(ListNode* head) {
    //     ListNode* slow = head;
    //     ListNode* fast = head;
    //     while(fast && fast->next) {
    //         slow = slow->next;
    //         fast = fast->next->next;
    //     }

    //     ListNode* rev = reverseLL(slow);
    //     ListNode* curr = head;

    //     while(rev -> next != nullptr) {
    //         ListNode* tempcurr = curr ->next;
    //         curr -> next = rev;
 
    //         ListNode* temprev = rev->next;
    //         rev -> next = tempcurr;

    //         curr = tempcurr;
    //         rev = temprev;
    //     }
    // }

    // approach 2
    void reorderList(ListNode* head) {
        stack<ListNode*> st;
        
        ListNode* curr = head;
        while(curr) {
            st.push(curr);
            curr = curr->next;
        }
        
        int k = st.size()/2;
        curr = head;
        while(k--) {
            ListNode* topNode = st.top();
            st.pop();
            
            ListNode* temp = curr->next;
            curr->next = topNode;
            topNode->next = temp;
            curr = temp;
        }
        
        curr->next = NULL;
    }

};
// @lc code=end

