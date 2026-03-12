/*
 * @lc app=leetcode id=42 lang=cpp
 *
 * [42] Trapping Rain Water
 */

#include <vector>
using namespace std;

// @lc code=start
class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();

        vector<int> leftMax = getLeftMaxArray(height, n);
        vector<int> rightMax = getrightMaxArray(height, n);

        
    }
};

// @lc code=end

