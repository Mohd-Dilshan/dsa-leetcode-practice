/*
 * @lc app=leetcode id=41 lang=cpp
 *
 * [41] First Missing Positive
 */

// @lc code=start
class Solution {
public:
    // Optimal sol ; T.C.: O(n), Space :O(1)
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();

        bool contains1 = false;

        for (int i = 0; i<n; i++){
            if(nums[i] == 1) {
                contains1= true;
            }
            //[1, n]
            if(nums[i] <= 0 || nums[i] >n ){ 
                nums[i] = 1;
            }
        }
        if(contains1 == false){
            return 1;
        }

        for(int  i = 0; i<n ; i++){
            int num = abs(nums[i]);
            int idx = num-1;

            if(nums[idx] < 0 ) continue;
            nums[idx] *= -1;
        }
        for (int i= 0; i<n ; i++){
            if(nums[i] > 0) {
                return i+1;
            }
        }

        return n+1;
    }
};
// @lc code=end

