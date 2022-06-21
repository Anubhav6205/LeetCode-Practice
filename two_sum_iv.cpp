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
 * Given the root of a Binary Search Tree and a target number k, return true if there exist two elements in the BST such that their sum is equal to the given target.

 
 */
class Solution {
public:
     void inorder(TreeNode *root,vector<int>&x)
{
       if(root==NULL){
        return;
    }
    inorder(root->left,x);
    x.push_back(root->val);
    inorder(root->right,x);
}
    bool findTarget(TreeNode* root, int k) {
        
           vector<int>x;
     inorder(root,x);
    int i=0,j=x.size()-1;
    while(i!=j)
    {
    
        if(x[i]+x[j]>k)
        {
            j--;
        }
        else if(x[i]+x[j]<k)
        {
            i++;
        }
        if(i==j)
        {
      
            return false;
        }
       if(x[i]+x[j]==k)
        {
            return true;
        }
        

    }
    return false;
        
    }
};