/*
 * @lc app=leetcode id=347 lang=cpp
 *
 * [347] Top K Frequent Elements
 */

// @lc code=start
class Solution {
public:

    //Approach-1 Using min-heap, TC : O(nlog(n-k))
    // typedef pair<int, int> p;
    
    // vector<int> topKFrequent(vector<int>& nums, int k) {
        
    //     // min-heap by frequency
    //     priority_queue<p, vector<p>, greater<p>> pq;
        
    //     // compute element counts
    //     unordered_map<int, int> mp;
    //     for(int i : nums)
    //         mp[i]++;
        
    //     // maintain k most frequent entries
    //     for(auto it : mp) {
    //         pq.push({it.second, it.first});
    //         if(pq.size() > k)
    //             pq.pop();
    //     }
        
    //     // extract results
    //     vector<int> result;
    //     while(!pq.empty()) {
    //         result.push_back(pq.top().second);
    //         pq.pop();
    //     }
    //     return result;
    // }

    // bucket sort by frequency
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        
        unordered_map<int, int> mp;
        
        for(int &num : nums) {
            mp[num]++;
        }
        
        // bucket[f] holds elements with frequency f
        vector<vector<int>> bucket(n+1);
        
        for(auto &it : mp) {
            int element = it.first;
            int freq    = it.second;
            
            bucket[freq].push_back(element);
        }
        
        // collect top k frequent elements
        vector<int> result;
        for(int i = n; i >= 0; i--) {
            if(bucket[i].empty()) continue;
            while(!bucket[i].empty() && k > 0) {
                result.push_back(bucket[i].back());
                bucket[i].pop_back();
                k--;
            }
        }
        
        return result;
    }
};
// @lc code=end

