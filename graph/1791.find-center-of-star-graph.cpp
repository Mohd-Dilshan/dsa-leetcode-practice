/*
 * @lc app=leetcode id=1791 lang=cpp
 *
 * [1791] Find Center of Star Graph
 */

// @lc code=start
#include <vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    // int findCenter(vector<vector<int>>& edges) {
        
    //     unordered_map<int, int> degree;

    //      for(auto &vec : edges) {
    //         int u = vec[0];
    //         int v = vec[1];

    //         degree[u]++;
    //         degree[v]++;
    //     }
    //     for (auto &it :degree) {
    //         if(it.second == edges.size()) {
    //             return it.first;
    //         }
    //     }
    //     return -1;
    // }



    //method 2
    int findCenter(vector<vector<int>>& edges) {
        vector<int> first  = edges[0];
        vector<int> second = edges[1];


        if(first[0] == second[0] || first[0] == second[1]) {
            return first[0];
        }
        return first[1];


    }
};
// @lc code=end

