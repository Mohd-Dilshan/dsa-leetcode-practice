/*
 * @lc app=leetcode id=841 lang=cpp
 *
 * [841] Keys and Rooms
 */

// @lc code=start
class Solution {
public:
    int count = 1;
    
    void dfs(vector<vector<int>>& rooms, int u, vector<bool>& visited) {
        visited[u] = true;
        
        for(int& node : rooms[u]) {
            if(!visited[node])
                dfs(rooms, node, visited);
        }
    }
    
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool> visited(n, false);
        
        dfs(rooms, 0, visited);
        
        for(bool x : visited) {
            if(x == false) return false;
        }
        return true;
        
    }
};
// @lc code=end

