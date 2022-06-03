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
 * A binary tree is uni-valued if every node in the tree has the same value.

Given the root of a binary tree, return true if the given tree is uni-valued, or false otherwise.
 */
class Solution {
public:
    
    bool solve(TreeNode* root,int rootval,bool &flag)
    {
        if(root==NULL)
        {
            return true;
        }
         if(root->val!=rootval)
        {
            flag=false;
            
        }
        
        solve(root->left,rootval,flag);
        solve(root->right,rootval,flag);
        return true;
      
        
    }
    bool isUnivalTree(TreeNode* root) {
        bool flag=true;
        int rootval=root->val;
        solve(root,rootval,flag);
        return flag;
        
    }
};