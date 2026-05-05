/*
 * @lc app=leetcode id=74 lang=cpp
 *
 * [74] Search a 2D Matrix
 */

// @lc code=start
#include <vector>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m = matrix.size();
        int n = matrix[0].size();

        // int i = 0, j = n - 1;

        // while(i <m && j >= 0) {
        //     if(matrix[i][j] > target) {
        //         j--;
        //     } else if(matrix[i][j] < target) {
        //         i++;
        //     } else {
        //         return true;
        //     }
        // }
        // return false; // T.C= O(n*n), S.C= O(1) and now i will change the approach to binary search T.C= O(log(m*n)) and S.C= O(1)



        int start = 0 , end = m * n - 1;

        while(start<= end) {
            int mid =  start + (end-start)/2;

            int row = mid / n;
            int col = mid % n;

            if (matrix[row][col] > target) {
                end = mid-1;
            } else if (matrix[row][col] < target) {
                start = mid +1;
            } else {
                return true;
            }
        }
        return false;

    }

};
// @lc code=end

