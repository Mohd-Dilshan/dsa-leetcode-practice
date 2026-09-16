/*
 * @lc app=leetcode id=219 lang=cpp
 *
 * [219] Contains Duplicate II
 */

// @lc code=start
#include <unordered_map>
using namespace std;
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int>mp;

        for (int i = 0; i<nums.size(); i++) {
            if(mp.find(nums[i]) != mp.end() && abs(mp[nums[i]] - i) <= k)
                return true;
            else 
                mp[nums[i]] = i;
        }

        return false;
    }
};
// @lc code=end

//*********************JAVA*************************

class Solution {
    public boolean containsNearbyDuplicate(int[] nums, int k) {
        Set<Integer> st = new HashSet<>();
        
        for (int j = 0; j < nums.length; j++) {
         
            if (j > k) {
                st.remove(nums[j - k - 1]);
            }
          
            if (st.contains(nums[j])) {
                return true;
            }
            
            st.add(nums[j]);
        }
        
        return false;
    }
}

