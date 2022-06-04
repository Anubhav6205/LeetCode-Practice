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
 * Given the root of a binary search tree, rearrange the tree in in-order so that the leftmost node in the tree is now the root of the tree, and every node has no left child and only one right child.
 */
class Solution {
public:
    
    
    void inorder(TreeNode* root,vector<int>&ans)
    {
        if(root==NULL)
        {
            return;
        }
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
        
    }
    TreeNode* increasingBST(TreeNode* root) {
        
        vector<int>ans;
        inorder(root,ans);
        TreeNode *head=new TreeNode(ans[0]);
        TreeNode *curr=head;
        for(int i=1;i<ans.size();i++)
        {
            TreeNode *x=new TreeNode(ans[i]);
            curr->right=x;
            curr=curr->right;
            
        }
        return head;
        
        
    }
};