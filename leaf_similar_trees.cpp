

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
 * Consider all the leaves of a binary tree, from left to right order, the values of those leaves form a leaf value sequence.
 */
class Solution {
public:
    
    vector<int>checkleaf(TreeNode* root,vector<int>&x)
    {
        if(root==NULL)
        { 
            return x;
        }
        checkleaf(root->left,x);
        if(root->left==NULL && root->right==NULL)
        {
            x.push_back(root->val);
        }
        checkleaf(root->right,x);
        return x;
        
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>x1;
        vector<int>x2;
        checkleaf(root1,x1);
        checkleaf(root2,x2);
     
        if(x1==x2)
        {
            return true;
        }
        return false;
    }
};