/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */

// @lc code=start
#include <vector>
#include <unordered_set>

using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //Create HashSet to integers

        unordered_set<int> intSet;

        //iterate over each element in the array
        for (int num : nums) {
            //check if the number is already in the set
            if (intSet.find(num) != intSet.end()) {
                return true; //duplicate found
            }
            //add the number to the set
            intSet.insert(num);
        }
        return false; //no duplicates found   
    }
};
// @lc code=end

