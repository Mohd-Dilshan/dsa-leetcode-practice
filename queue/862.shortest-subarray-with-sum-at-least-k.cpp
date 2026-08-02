/*
 * @lc app=leetcode id=862 lang=cpp
 *
 * [862] Shortest Subarray with Sum at Least K
 */

// @lc code=start


// Time: O(n), Space: O(n)
class Solution {
public:
    int shortestSubarray(vector<int>& nums, int K) {
        int N = nums.size();
        deque<int> deq;
        vector<long long> cumulativeSum(N, 0);

        int result = INT_MAX;
        int j = 0;

        while (j < N) {
            cumulativeSum[j] = (j == 0) ? nums[j] : cumulativeSum[j - 1] + nums[j];

            if (cumulativeSum[j] >= K)
                result = min(result, j + 1);

            while (!deq.empty() && cumulativeSum[j] - cumulativeSum[deq.front()] >= K) {
                result = min(result, j - deq.front());
                deq.pop_front();
            }

            while (!deq.empty() && cumulativeSum[j] <= cumulativeSum[deq.back()]) {
                deq.pop_back();
            }

            deq.push_back(j);
            j++;
        }

        return result == INT_MAX ? -1 : result;
    }
};
// @lc code=end

