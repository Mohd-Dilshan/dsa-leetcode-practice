/*
 * @lc app=leetcode id=48 lang=cpp
 *
 * [48] Rotate Image
 */

// @lc code=start
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = m;

        // transpose
        for (int i = 0; i<m; i++){
            for(int j = i; j<n; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        //reverse the row of mat
        for (int i = 0; i<m; i++) {
            reverse(matrix[i].begin(),matrix[i].end());
        }

    }
};
// @lc code=end

