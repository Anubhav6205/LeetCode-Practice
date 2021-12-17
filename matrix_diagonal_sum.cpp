/*Given a square matrix mat, return the sum of the matrix diagonals.

Only include the sum of all the elements on the primary diagonal and all the elements on the secondary diagonal that are not part of the primary diagonal.
*/
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        
        int sum=0;
        int i,j;
        for (i=0;i<mat.size();i++)
        {
            for(j=0;j<mat.size();j++)
            {
                if(i==j)
                {
                    sum+=mat[i][j];
                }
                if(i+j+1==mat.size() && i!=j)
                {
                     sum+=mat[i][j];
                    
                }
                
                
            }
        }
        
        cout<<"sum : "<<sum;
        return sum;
        
    }
};