/*
 * @lc app=leetcode id=102 lang=cpp
 *
 * [102] Binary Tree Level Order Traversal
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

#include<vector>
#include<queue>
using namespace std;

class Solution {
public:

    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> v;

        if (root == nullptr){
            return v;
        }

        queue<TreeNode*> q;
        q.push(root);


        while(!q.empty()){
            int x = q.size();
            vector<int>v1;

            while(x--){
                TreeNode* front = q.front();
                q.pop();
                v1.push_back(front->val);
                if (front->left != nullptr){
                    q.push(front->left);
                }
                if (front->right != nullptr){
                    q.push(front->right);
                }
            }
            v.push_back(v1);
        }
        return v;
    }
};
// @lc code=end

