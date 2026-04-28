/*
 * @lc app=leetcode id=509 lang=cpp
 *
 * [509] Fibonacci Number
 */

// @lc code=start
#include<vector>
using namespace std;
class Solution {
public:
    // //memoization
    // int solve(int n, vector<int> &dp) {
    //     if (n <= 1) return n;
    //     if (dp[n] != -1) return dp[n];

    //     return dp[n]= solve(n-1, dp) + solve(n-2, dp);

    // }
    // int fib(int n) {
    //     // if (n<=1) return n; //lowest possible value of n is 0, so we can return n directly

    //     // return fib(n - 1) + fib(n - 2);
    //     if (n <= 1) return n;

    //     vector<int> dp (n+1, -1);
    //     return solve(n, dp);
    // }

    //bottom up approach
    // time complexity: O(n) and space complexity: O(n)

    // int fib(int n) {
    //     if(n<=1) return n;

    //     vector<int> dp (n+1, -1);
    //     dp[0] = 0;
    //     dp[1] = 1;

    //     for (int i = 2; i<=n ; i++) {
    //         dp[i] = dp[i-1] + dp[i-2];
    //     }
    //     return dp[n];
    // }

    //space optimization
    // time complexity: O(n) and space complexity: O(1)
    int fib(int n) {
        if (n <= 1) return n;

        int c, a = 0, b = 1;
        for (int i = 1; i<n; i++) {
            c= a+b;
            a=b;
            b=c;
        }
        return c;

    }
};
// @lc code=end

