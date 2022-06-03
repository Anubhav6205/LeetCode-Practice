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
 * Given the root node of a binary search tree and two integers low and high, return the sum of values of all nodes with a value in the inclusive range [low, high]
 */
class Solution {
public:
    
    void inorder(TreeNode* root, int low, int high,int &sum)
    {
        if(root==NULL)
        {
            return;
        }
        inorder(root->left,low,high,sum);
       
        if(root->val>=low && root->val<=high)
        {
            (sum)+=root->val;
          
        }
        inorder(root->right,low,high,sum);
        
    }
    
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum=0;
        inorder(root,low,high,sum);
        return sum;
    }
};