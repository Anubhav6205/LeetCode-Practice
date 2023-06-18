class Solution {
public:
    
    void inorder(TreeNode* root,vector<int> &x)
    {
        if(root==NULL)
        {
            return;
        }
        inorder(root->left,x);
        x.push_back(root->val);
        inorder(root->right,x);
    }
    int getMinimumDifference(TreeNode* root) {
                vector<int>x;
        inorder(root,x);
        int mdif=INT_MAX;
        int i;
        for(i=0;i<x.size()-1;i++)
        {
            mdif=min(mdif,x[i+1] - x[i]);
         
        }
        return mdif;
        
    }
};