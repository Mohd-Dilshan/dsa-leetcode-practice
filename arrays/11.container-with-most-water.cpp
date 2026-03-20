/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
#include <vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();

        int i = 0, j = n-1;

        int maxWater = 0;

        while(i<j) {
            int w = j-i;

            int h = min(height[i], height[j]);

            int area = w*h;

            maxWater = max(maxWater, area);

            if(height[i] > height[j]) {
                j--;
            } else {
                i++;
            }

        }
        return maxWater;
    }
};
// @lc code=end

