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
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL)
        {
            return false;
        }
        if(root->left==NULL && root->right==NULL && targetSum==root->val)
        {
            return true;
        }
        else if(root->left==NULL && root->right==NULL && targetSum!=root->val)
        {
            return false;
        }
        
        bool l=hasPathSum(root->left,targetSum-root->val);
        bool r=hasPathSum(root->right,targetSum-root->val);
        
        return l||r;
        
    }
};// do it again