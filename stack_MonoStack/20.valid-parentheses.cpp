/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        // Approch 1: Use stack to store the left parentheses, and pop when meet the right parentheses.
        // for (char &ch :s){
        //     if (st.empty() || ch == '(' || ch == '{' || ch == '[') {
        //         st.push(ch);
        //         continue;
        //     }
        //     if (ch == ')' ) {
        //         if (st.top() == '(')
        //             st.pop();
        //         else
        //             return false;
        //     } else if (ch == '}') {
        //         if (st.top() == '{')
        //             st.pop();
        //         else
        //             return false;
        //     } else if (ch == ']') {
        //         if (st.top() == '[')
        //             st.pop();
        //         else
        //             return false;
        //     }
        // }
        // return st.empty();


        // Approch 2: Use stack to store the right parentheses, and pop when meet the left parentheses.

        for (char &ch :s ) {
            if (ch == '(')
                st.push(')');
            else if (ch == '{')
                st.push('}');
            else if (ch == '[')
                st.push(']');
            else if (st.empty() || st.top() != ch){
                return false;
            } else {
                st.pop();
            }
        }
        return st.empty();
    }
};
// @lc code=end

