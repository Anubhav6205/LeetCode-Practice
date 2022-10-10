/*You are given an n x n integer matrix grid.

Generate an integer matrix maxLocal of size (n - 2) x (n - 2) such that:

maxLocal[i][j] is equal to the largest value of the 3 x 3 matrix in grid centered around row i + 1 and column j + 1.
In other words, we want to find the largest value in every contiguous 3 x 3 matrix in grid.

Return the generated matrix.*/
class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        
            vector<vector<int>>ans;

    int i,j,k,l;
    for(i=1;i<grid.size()-1;i++)
    {
        vector<int>z;
        for(j=1;j<grid.size()-1;j++)
        {
        
            int mx=0;
            
            for(k=i-1;k<=i+1;k++)
            {
                for(l=j-1;l<=j+1;l++)
                {
               
                    mx=max(mx,grid[k][l]);
                }
            
            }
       
            z.push_back(mx);
        }
    
        ans.push_back(z);
   

    }
 
        return ans;
        
    }
};