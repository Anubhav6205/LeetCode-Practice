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
 * Given the root of a binary search tree, and an integer k, return the kth smallest value (1-indexed) of all the values of the nodes in the tree.
 */
class Solution {
public:
    
    void inorder(vector<int>& x,TreeNode* root)
    {
        if(root==NULL)
        {
            return;
        }
        inorder(x,root->left);
        x.push_back(root->val);
        inorder(x,root->right);
        
    }
    
    int kthSmallest(TreeNode* root, int k) {
        vector<int>x;
        inorder(x,root);
        return x[k-1];
        
    }
};