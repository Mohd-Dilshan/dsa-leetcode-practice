/*
 * @lc app=leetcode id=84 lang=cpp
 *
 * [84] Largest Rectangle in Histogram
 */

// @lc code=start
#include<vector>
#include<stack>
using namespace std;
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int>left(n, 0); // left smaller nearest element
        vector<int>right(n, 0); // right smaller nearest element
        stack<int>s;

        //  right smaller nearest element
        for (int i = n - 1; i>=0; i--) {
            while (s.size() > 0 && heights[s.top()] >= heights[i]) {
                s.pop();
            }
            right[i] = s.empty() ? n : s.top();
            s.push(i);
        }

        while(!s.empty()) {
            s.pop();
        }

        //  left smaller nearest element = O(n)
        for (int i = 0; i<n; i++) {
            while (s.size() > 0 && heights[s.top()] >= heights[i]) {
                s.pop();
            }
            left[i] = s.empty() ? -1 : s.top();
            s.push(i);
        }

        int ans = 0; 
        for (int i=0; i<n; i++) { 
            int width = right[i] - left[i] -1;
            int currArea = heights[i] * width;
            ans = max(ans, currArea);
 
        }
        return ans;

    }
};
// @lc code=end

