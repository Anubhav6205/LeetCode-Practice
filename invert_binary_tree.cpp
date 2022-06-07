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
 * Given the root of a binary tree, invert the tree, and return its root.
 */
class Solution {
public:
    
    void invert(TreeNode* &root)
    {
        if(root==NULL)
        {
            return;
        }
        if(root->left && root->right)
        {
            TreeNode* temp=root->left;
                root->left=root->right;
            root->right=temp;
        }
        else if(root->left)
        {
            root->right=root->left;
            root->left=NULL;
        }
        else if(root->right)
        {
            root->left=root->right;
            root->right=NULL;
            
        }
        invert(root->left);
        invert(root->right);
    }
        
    TreeNode* invertTree(TreeNode* root) {
        invert(root);
        return root;
        
        
        
    }
};