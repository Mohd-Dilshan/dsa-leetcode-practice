/*
 * @lc app=leetcode id=19 lang=cpp
 *
 * [19] Remove Nth Node From End of List
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}a
 * };
 */
class Solution {
public:
// approach : two pass
    int travel_front(ListNode* head) {
        int length = 0;
        while(head != nullptr) {
            length++;
            head = head->next;
        }
        return length;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int L = travel_front(head);

        if (n == L) {
            //delete head
            ListNode* temp = head->next;
            delete(head);
            return temp;
        }
        int travel_front = L-n;
        ListNode* temp = head;
        ListNode* prev = nullptr;

        while(travel_front--) {
            prev = temp;
            temp = temp->next;
        }
        prev->next = temp->next;
        delete(temp);
        return head;
    }

    // approach : one pass
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;

        for (int i = 1; i<=n; i++) {
            temp = temp -> next;
        }
        if (temp == nullptr) {
            ListNode* result = head->next;
            delete(head);
            return result;
        }

        ListNode* prev = head;

        while(temp != nullptr && temp->next != nullptr) {
            prev = prev->next;
            temp = temp -> next;
        }
        ListNode* delNode = prev-> next;
        prev->next = prev->next->next;
        delete(delNode);

        return head;

    }



};
// @lc code=end

