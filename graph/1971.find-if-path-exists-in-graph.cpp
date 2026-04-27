/*
 * @lc app=leetcode id=1971 lang=cpp
 *
 * [1971] Find if Path Exists in Graph
 */

// @lc code=start
#include <vector>
#include <unordered_map>
#include <queue>
using namespace std;
class Solution {
public:
    // using DFS to check if there is a path from S to D
    // bool check(unordered_map<int, vector<int>> mp, int S, int D,vector<bool>& visited )  {
    //     if (S == D ) {
    //         return true;
    //     }
    //     if(visited[S] == true) {
    //         return false;
    //     }
    //     visited[S] = true;

    //      // explore the neighbors of S
    //      for(auto &node : mp[S]) {
    //          if(check(mp, node, D, visited) == true) {
    //                 return true;
    //             }
    //     }
    //     return false; 

    // }

    // bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
    //     //adjacency list
    //     unordered_map<int, vector<int>> mp;

    //     for (vector<int> edge : edges) {
    //         int u = edge[0];
    //         int v = edge[1];
    //         // bidirectional graph
    //         mp[u].push_back(v);
    //         mp[v].push_back(u);   
    //     }
    //     vector<bool> visited(n, false);

    //     return check(mp, source, destination, visited);
    // }



    // using BFS to check if there is a path from S to D
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        //adjacency list
        unordered_map<int, vector<int>> mp;

        for (vector<int> edge : edges) {
            int u = edge[0];
            int v = edge[1];
            // bidirectional graph
            mp[u].push_back(v);
            mp[v].push_back(u);   
        }
        vector<bool> visited(n, false);

        queue<int> que;
        que.push(source);
        visited[source] = true;

        while(!que.empty()) {
            int node = que.front();
            que.pop();

            if(node == destination) {
                return true;
            }

            for(auto &V: mp[node]) {
                if(!visited[V]) {
                    que.push(V);
                    visited[V] = true;
                }
            }
        }
        return false;
    }

};
// @lc code=end

