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
 * Given the root of a binary search tree (BST) with duplicates, return all the mode(s) (i.e., the most frequently occurred element) in it.

If the tree has more than one mode, return them in any order.

Assume a BST is defined as follows:

The left subtree of a node contains only nodes with keys less than or equal to the node's key.
The right subtree of a node contains only nodes with keys greater than or equal to the node's key.
Both the left and right subtrees must also be binary search trees.
 
 */
class Solution {
public:
    void inorder(TreeNode* root, unordered_map<int,int>&x)
    {
        if(root==NULL)
        {
            return;
        }
        inorder(root->left,x);
        x[root->val]++;
        inorder(root->right,x);
    }
    vector<int> findMode(TreeNode* root) {
        unordered_map<int,int>x;
        inorder(root,x);
        int maxx=0;
        vector <int>z;
        for(auto it:x)
        {
          maxx=max(maxx,it.second);
           
        }
   
        for(auto it:x)
        {
            if(it.second==maxx)
            {
                z.push_back(it.first);
            }
            
        }
        return z;
        
        
    }
};