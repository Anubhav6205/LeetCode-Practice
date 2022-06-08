/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * 
 * };
 * 
 * Given the root of a binary tree, return the sum of all left leaves.

A leaf is a node with no children. A left leaf is a leaf that is the left child of another node.
 */
class Solution {
public:
    void sumcalc(int &sum,TreeNode *root,bool &isleft)
    {
        if(root==NULL)
        {
            return;
        }
        if(root->left==NULL && root->right==NULL && isleft)
        {
            sum+=root->val;
            
        }
        isleft=true;
        sumcalc(sum,root->left,isleft);
        isleft=false;
        sumcalc(sum,root->right,isleft);
        
        
        
    }
    
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root->left  && !root->right)
        {
            return 0;
        }
        int sum=0;
        bool isleft=true;
        sumcalc(sum,root,isleft);
        return sum;
        
    }
};