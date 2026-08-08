/*
 * @lc app=leetcode id=137 lang=cpp
 *
 * [137] Single Number II
 */

// @lc code=start
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;

        for (int k = 0; k<=31; k++) {
            int countOnes = 0;

            int temp = (1<<k);

            for (int &num :nums) {

                if((num & temp)== 0) {
                }
                else{
                    countOnes++;
                }
            }

            if(countOnes % 3 == 1){
                result = (result | (temp));
            }

        }
        return result;

    }
};
// @lc code=end

