/*
 * @lc app=leetcode id=155 lang=cpp
 *
 * [155] Min Stack
 */

// @lc code=start
#include<stack>
using namespace std;
class MinStack {
public:

    // approach 1: sc:o(2*n)
    // stack<pair<int, int >> s;

    // MinStack() {
        
    // }
    
    // void push(int val) {
    //     if (s.empty() ){
    //         s.push({val,val});
    //     } else {
    //         int minVal = min (val, s.top().second);
    //         s.push({val, minVal});
    //     }
    // }
    
    // void pop() {
    //     s.pop();
        
    // }
    
    // int top() {
    //     return s.top().first;
        
    // }
    
    // int getMin() {
    //     return s.top().second;
        
    // }



    //approach 2 , tc :(O(n)); sc O(n)
    stack<long long > s;
    long long int minVal;

    MinStack() {
        
    }
    
    void push(int val) {
        if (s.empty()){
            s.push(val);
            minVal = val;
        } else {
            if(val<minVal) {
                s.push((long long)2*val-minVal);
                minVal= val;
            } else {
                s.push(val);
            }
        }
    }
    
    void pop() {
        if (s.top() < minVal) {
            minVal = 2 * minVal - s.top();
        }
        s.pop();
        
    }
    
    int top() {
        if (s.top() < minVal){
            return minVal;
        }
        return s.top();
    }
    
    int getMin() {
        return minVal;
        
    }


};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
// @lc code=end

