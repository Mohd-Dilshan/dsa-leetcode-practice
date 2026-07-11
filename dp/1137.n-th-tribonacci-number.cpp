/*
 * @lc app=leetcode id=1137 lang=cpp
 *
 * [1137] N-th Tribonacci Number
 */

// @lc code=start
#include <cstring>
using namespace std;
class Solution {
public:
    //rec+mem
    // int t[38];
    // int find(int n) {
    //     if(n == 0)
    //         return 0;
    //     if(n == 1 || n == 2)
    //         return 1;
            
    //     if(t[n] != -1) {
    //         return t[n];
    //     }
        
    //     int a = find(n-1);
    //     int b = find(n-2);
    //     int c = find(n-3);
        
    //     return t[n] = a+b+c;
    // }
    
    // int tribonacci(int n) {
    //     memset(t, -1, sizeof(t));
    //     return find(n);
    // }


    //bottom-up; tc:O(n)/ O(1); sc: O(1)
    // int tribonacci (int n) {
    //     int t[38];
    //     t[0] = 0;
    //     t[1] = 1;
    //     t[2] = 1;

    //     for (int i = 3; i<= 37; i++) {
    //         t[i] = t[i-1]+ t[i-2] + t[i-3];
    //     }
    //     return t[n];
    // }


    //constant space
    int tribonacci(int n) {
        if (n == 0) return 0;
        if (n == 1 || n == 2) return 1;
        
        int a = 0;
        int b = 1;
        int c = 1;
        int d = 0;
        
        for (int i = 3; i <= n; i++) {
            d = a + b + c; // Calculate current sequence value
            a = b;         // Shift window forward
            b = c;
            c = d;
        }
        
        return d;
    }


};

// @lc code=end

