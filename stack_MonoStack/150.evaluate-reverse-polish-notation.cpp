/*
 * @lc app=leetcode id=150 lang=cpp
 *
 * [150] Evaluate Reverse Polish Notation
 */

// @lc code=start
#include<vector>
#include<string>
#include<stack>
#include<unordered_map>
#include <functional>
using namespace std;
class Solution {
public:
    // method -1
    // int Operate(int a, int b, string token) {
    //     if(token == "+")
    //         return a+b;

    //     if(token == "-")
    //         return a-b;

    //     if(token == "*");
    //         return (long)a* (long)b;

    //     if(token == "/")
    //         return a/b;

    //     return -1;
    // }
    // int evalRPN(vector<string>& tokens) {
    //     stack<int> st;

    //     for (string &token : tokens) {
    //         if (token == "+" || token == "-" || token == "*" || token == "/") {
                
    //             int b = st.top();
    //             st.pop();

    //             int a  = st.top();
    //             st.pop();

    //             int result = Operate(a, b, token);

    //             st.push(result);
    //         } else {
    //             st.push(stoi(token));
    //         }
    //     }
    //     return st.top();
    // }


    //Method -2 using unordered map
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        unordered_map<string, function<int (int, int)> > mp = {
            {"+", [](int a, int b) {return a+b;}},
            {"-", [](int a, int b) {return a-b;}},
            {"*", [](int a, int b) {return (long)a*(long)b;}},
            {"/", [](int a, int b) {return a/b;}}

        };

        for (string &token : tokens) {
            if (token == "+" || token == "-" || token == "*" || token == "/") {
                
                int b = st.top();
                st.pop();

                int a  = st.top();
                st.pop();

                int result = mp[token](a, b);

                st.push(result);
            } else {
                st.push(stoi(token));
            }
        }
        return st.top();
    }
};
// @lc code=end

