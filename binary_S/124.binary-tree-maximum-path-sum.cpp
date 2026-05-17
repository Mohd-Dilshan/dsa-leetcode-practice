/*
 * @lc app=leetcode id=124 lang=cpp
 *
 * [124] Binary Tree Maximum Path Sum
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
#include<climits>
using namespace std;
class Solution {
public:
    int maxSum;

    int solve(TreeNode* root) {
        if (root == nullptr ) {
            return 0;
        }
        int l = solve(root->left);
        int r = solve(root->right);

        int bestsomebeforRoot = l+ r+ root->val;

        int bestSum = max(l, r) + root->val ;
        int onlyrootBest = root->val;

        maxSum = max({maxSum, bestsomebeforRoot, bestSum, onlyrootBest});

        return max(bestSum, onlyrootBest);
    }

    int maxPathSum(TreeNode* root) {
        maxSum = INT_MIN;
        
        solve(root);
        return maxSum;

    }
};
// @lc code=end

