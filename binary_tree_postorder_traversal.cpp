/**
 * 
 * Given the root of a binary tree, return the postorder traversal of its nodes' values.
 * 
 * 
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
    
    void postorder(TreeNode *root,vector<int>&x)
    {
        if(root==NULL)
        {
            return ;
        }
        postorder(root->left,x);
        postorder(root->right,x);
        x.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>x;
        postorder(root,x);
        return x;
        
    }
};