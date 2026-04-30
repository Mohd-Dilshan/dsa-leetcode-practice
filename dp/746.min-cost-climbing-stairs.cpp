/*
 * @lc app=leetcode id=746 lang=cpp
 *
 * [746] Min Cost Climbing Stairs
 */

// @lc code=start
#include <vector>
#include <cstring>
using namespace std;
class Solution {
public:
    // Recursion with memoization
    // int t[1001];
    // int solve(int idx, vector<int>& cost) {
    //     if(idx >= cost.size()) {
    //         return 0;
    //     } 
    //     if (t[idx] != -1) {
    //         return t[idx];
    //     }

    //     int a = cost[idx] + solve(idx + 1, cost);
    //     int b = cost[idx] + solve(idx + 2, cost);

    //     return t[idx] = min(a, b);
    // }

    // int minCostClimbingStairs(vector<int>& cost) {
    //     int n = cost.size();
    //     memset(t, -1, sizeof(t));

    //     return min(solve(0, cost), solve(1, cost));
    // }




    //bottom up
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        if (n == 2) {
            return min(cost[0], cost[1]);
        }
        for (int i = 2; i<n ; i++) {
            cost[i] = cost[i] + min (cost[i-1], cost[i-2]);
        }
        return min(cost[n-1], cost[n-2]);
    }



};
// @lc code=end

