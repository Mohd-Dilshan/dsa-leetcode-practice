/*
 * @lc app=leetcode id=239 lang=cpp
 *
 * [239] Sliding Window Maximum
 */

// @lc code=start
#include <vector>
#include <deque>
using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();

        deque<int> deq;

        vector<int> result;

        for (int i = 0; i<n; i++){
            // step1: make space for nums[i]
            while(!deq.empty() && deq.front() <= i-k) {
                deq.pop_front();
            }
            //step2: pop smaller elements
            while(!deq.empty() && nums[i] > nums[deq.back()]) {
                deq.pop_back();
            }
            //step3: add nums[i]
            deq.push_back(i);
            
            //step4: add max to result
            if (i >= k-1) {
                result.push_back(nums[deq.front()]);
            }
        }
        return result;

    }
};
// @lc code=end

