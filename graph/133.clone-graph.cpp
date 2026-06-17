/*
 * @lc app=leetcode id=133 lang=cpp
 *
 * [133] Clone Graph
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/
#include<unordered_map>
using namespace std;
class Solution {
public:
    // //Approach-1 DFS (Using unordered_map)
    // unordered_map<Node*, Node*> mp;
    
    // // DFS helper: traverse original node and build neighbor links in clone
    // void DFS(Node* node, Node* clone_node) {
        
    //     for(Node* n : node->neighbors) {
            
    //         if(mp.find(n) == mp.end()) {
                
    //             Node* clone = new Node(n->val);
    //             mp[n] = clone;
    //             clone_node->neighbors.push_back(clone);
                
    //             DFS(n, clone);
                
    //         } else {
                
    //             // neighbor already cloned: reuse existing clone
    //             clone_node->neighbors.push_back(mp[n]);   
    //         }   
    //     }  
    // }
    
    // // main entry: clone the graph starting from `node`
    // Node* cloneGraph(Node* node) {
    //     if(!node)
    //         return NULL;
        
    //     mp.clear();
        
    //     //cloned the given node
    //     Node* clone_node = new Node(node->val);
        
    //     mp[node] = clone_node;
        
    //     DFS(node, clone_node);
        
    //     return clone_node;
    // }


    //Approach-2 BFS (Using unordered_map)
    unordered_map<Node*, Node*> mp;
    
    void DFS(Node* node, Node* clone_node) {
        
        for(Node* n : node->neighbors) {
            
            if(mp.find(n) == mp.end()) {
                
                Node* clone = new Node(n->val);
                mp[n] = clone;
                clone_node->neighbors.push_back(clone);
                
                DFS(n, clone);
                
            } else {
                
                clone_node->neighbors.push_back(mp[n]);
                
            }   
        }
    }
    
    void BFS(queue<Node*> &que) {
        
        while(!que.empty()) {
            
            Node* node = que.front();
            Node* clone_node = mp[node];
            que.pop();
            
            for(Node* n : node->neighbors) {
            
                if(mp.find(n) == mp.end()) {

                    Node* clone = new Node(n->val);
                    mp[n] = clone;
                    clone_node->neighbors.push_back(clone);

                    //DFS(n, clone);
                    que.push(n);

                } else {

                    clone_node->neighbors.push_back(mp[n]);

                }
            
            }
            
        }
        
    }
    
    Node* cloneGraph(Node* node) {
        if(!node)
            return NULL;
        
        mp.clear();
        
        //cloned the given node
        Node* clone_node = new Node(node->val);
        
        mp[node] = clone_node;
        
        queue<Node*> que;
        que.push(node);
        BFS(que);
        
        return clone_node;
    }
};
// @lc code=end

