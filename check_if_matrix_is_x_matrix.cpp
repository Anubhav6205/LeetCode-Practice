/*A square matrix is said to be an X-Matrix if both of the following conditions hold:

All the elements in the diagonals of the matrix are non-zero.
All other elements are 0.
Given a 2D integer array grid of size n x n representing a square matrix, return true if grid is an X-Matrix. Otherwise, return false*/
class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        
        bool checkdiag = true;
    int n = grid.size();
   
    bool checkother = true;
    int i, j;
    for (i = 0; i < grid.size(); i++)
    {
        for (j = 0; j < grid[i].size(); j++)
        {
          
            if (i == j)
            {
              
                if (grid[i][j] == 0)
                {
                    checkdiag = false;
                }
            }
            else if (i + j == n-1)
            {
              
                if (grid[i][j] == 0)
                {
                    checkdiag = false;
                }
            }
            else if(grid[i][j]!=0)
            {
               
                checkother=false;

            }
        }
        
       
    }
        
         if(checkdiag&&checkother)
        {
            return true;
        }
        return false;
        
    }
};