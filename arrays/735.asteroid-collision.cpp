/*
 * @lc app=leetcode id=735 lang=cpp
 *
 * [735] Asteroid Collision
 */

// @lc code=start
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> st;

        for (int &a : asteroids) {
            while (!st.empty() && a < 0 && st.back() > 0 ) {
                int sum = a+st.back();
                 if (sum < 0) {
                    st.pop_back();
                } else if (sum >0 ){
                    a = 0;
                } else {
                    st.pop_back();
                    a = 0;
                }
            }
            if (a!= 0) {
                st.push_back(a);
            }
        }
        return st;
    }
};
// @lc code=end

