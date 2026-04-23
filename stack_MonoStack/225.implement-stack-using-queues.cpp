/*
 * @lc app=leetcode id=225 lang=cpp
 *
 * [225] Implement Stack using Queues
 */

// @lc code=start
#include <queue>
using namespace std;
class MyStack {
public:
     // Approach 1: Two Queues
    // queue<int> q1;
    // queue<int> q2;

    // MyStack() {
        
    // }
    
    // void push(int x) {
    //     q2.push(x);
    //     while(!q1.empty()) {
    //         q2.push(q1.front());
    //         q1.pop();
    //     }
    //     swap(q1, q2);
    // }
    
    // int pop() {
    //     int result = q1.front();
    //     q1.pop();
    //     return result;
    // }
    
    // int top() {
    //     return q1.front();
    // }
    
    // bool empty() {
    //     return q1.empty(); 
    // }

    // Approach 2: One Queue
    queue<int> queue;

    MyStack() {
        
    }
    
    void push(int x) {
        queue.push(x);
        int n  = queue.size();

        for (int i = 0; i < n - 1; i++) {
            queue.push(queue.front());
            queue.pop();
        }
    }
    
    int pop() {
        int x = queue.front();
        queue.pop();
        return x;
    }
    
    int top() {
        return queue.front();
    }
    
    bool empty() {
        return queue.empty(); 
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
// @lc code=end

