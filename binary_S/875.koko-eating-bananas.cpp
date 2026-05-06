/*
 * @lc app=leetcode id=875 lang=cpp
 *
 * [875] Koko Eating Bananas
 */

// @lc code=start
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:

    bool canEatAll(vector <int> & piles, int mid, int h) {
        int actualHour = 0;

        for (int &x :piles) {
            actualHour += x/mid; // hours
            if (x%mid != 0) {
                actualHour++;
            }
        }
        return actualHour <= h ;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();

        int  l =1;
        int r = *max_element(begin(piles), end(piles));

        while (l < r) {
            int mid  = l + (r-l) /2;  // per hour can eat mid bananas

            if (canEatAll(piles, mid, h)) {
                r = mid; 
            } else {
                l = mid +1;
            }
        }
        return l ;
    }
};
// @lc code=end

