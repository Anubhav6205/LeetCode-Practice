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
 * Given the root of a binary tree, return all root-to-leaf paths in any order.

A leaf is a node with no children
 */
class Solution {
public:
    
    void rec(TreeNode* root,vector<string>&ans,string path,vector<int>nodes)
    {
        if(!root)
        {
            return;
        }
         path+=to_string(root->val);
            if(root->left || root->right)
            {
                path+="->";
            }
        rec(root->left,ans,path,nodes);
        rec(root->right,ans,path,nodes);
        if(!root->left && !root->right)
        {
      
        ans.push_back(path);
        }
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        
        vector<string>ans;
        vector<int>nodes;
        string path;
        rec(root,ans,path,nodes);
        return ans;
        
    }
};