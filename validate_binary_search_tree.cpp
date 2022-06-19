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
 * 
 * Given the root of a binary tree, determine if it is a valid binary search tree (BST).

A valid BST is defined as follows:

The left subtree of a node contains only nodes with keys less than the node's key.
The right subtree of a node contains only nodes with keys greater than the node's key.
Both the left and right subtrees must also be binary search trees.
 */
class Solution {
public:
    
    void validate(TreeNode* root,vector<int>&x)
    {
        if(root==NULL)
        {
            return;
        }
        validate(root->left,x);
        x.push_back(root->val);
        validate(root->right,x);
        
        
   
    }
    bool isValidBST(TreeNode* root) {
 
        vector<int>x;
        validate(root,x);
        for(int i=0;i<x.size()-1;i++)
        {
            if(x[i]>=x[i+1])
            {
                return false;
            }
        }
        return true;
        
    }
};