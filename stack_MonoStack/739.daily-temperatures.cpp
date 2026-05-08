/*
 * @lc app=leetcode id=739 lang=cpp
 *
 * [739] Daily Temperatures
 */

// @lc code=start
#include<vector>
#include<stack>
using namespace std;
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
          
        stack<int> st;

        vector<int> result(n);

        for(int i = n-1; i>=0; i--) {
            while(!st.empty() && temperatures[i] >= temperatures[st.top()]) {
                st.pop();
            }
            if (st.empty()){
                result[i] = 0;
            } else {
                result[i] = st.top() - i; 
            }
            st.push(i);
        }
        return result;
    }
};
// @lc code=end

