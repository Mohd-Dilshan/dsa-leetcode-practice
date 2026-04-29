/*
 * @lc app=leetcode id=997 lang=cpp
 *
 * [997] Find the Town Judge
 */

// @lc code=start
#include <vector>
using namespace std;
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        //approach: indegree and outdegree
        //time complexity: O(n)
        //space complexity: O(n)
        // vector<int> indegree(n+1);
        // vector<int> outdegree(n+1);

        // for (vector<int>& vec :trust) {
        //     int u =vec[0];
        //     int v =vec[1];

        //     outdegree[u]++;
        //     indegree[v]++;
        // }
        // for (int i = 1; i<=n; i++) {
        //     if (indegree[i] == n-1 && outdegree[i] == 0) {
        //         return i;
        //     }
        // }
        // return -1;


        //approach: one pass using a single array, time complexity: O(n), space complexity: O(n)
        vector<int> Count(n+1);

        for (vector<int>& vec :trust) {
            int u =vec[0];
            int v =vec[1];

            Count[u]--;
            Count[v]++;
        }
        for (int i = 1; i<=n; i++) {
            if (Count[i] == n-1) {
                return i;
            }
        }
        return -1;
    }
};
// @lc code=end

