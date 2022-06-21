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
 * Given the root of a Binary Search Tree (BST), return the minimum difference between the values of any two different nodes in the tree.
 */
class Solution {
public:
    
    void inorder(TreeNode* root,vector<int> &x)
    {
        if(root==NULL)
        {
            return;
        }
        inorder(root->left,x);
        x.push_back(root->val);
        inorder(root->right,x);
    }
    int minDiffInBST(TreeNode* root) {
        vector<int>x;
        inorder(root,x);
        int mdif=INT_MAX;
        int i;
        for(i=0;i<x.size()-1;i++)
        {
            mdif=min(mdif,x[i+1] - x[i]);
         
        }
        return mdif;
        
    }
};