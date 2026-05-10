/*
 * @lc app=leetcode id=496 lang=cpp
 *
 * [496] Next Greater Element I
 */

// @lc code=start
#include <vector>
#include <stack>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        stack<int> s;
        unordered_map<int, int> m; // nums2[i], nextGreater

        // Find next greater element for nums2
        for (int i = nums2.size() - 1; i >= 0; i--) {

            while (!s.empty() && s.top() <= nums2[i]) {
                s.pop();
            }

            if (s.empty()) {
                m[nums2[i]] = -1;  
            } else {
                m[nums2[i]] = s.top();
            }

            s.push(nums2[i]);
        }

        // Build answer for nums1
        vector<int> ans;

        for (int num : nums1) {
            ans.push_back(m[num]);
        }
        return ans;
    }
};
// @lc code=end

