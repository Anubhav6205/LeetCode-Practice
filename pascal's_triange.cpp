/*Given an integer numRows, return the first numRows of Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:*/
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
 
        if(numRows==1)
        {
            return {{1}};
        }
        else if(numRows==2)
        {
            return {{1},{1,1}};
        }
        vector<vector<int>>x;
        int i;
        x.push_back({1});
        x.push_back({1,1});
        for(i=2;i<numRows;i++)
        {
            vector<int>z;
            for(int j=0;j<i+1;j++)
            {
                if(j==0)
                {
                    z.push_back(1);
                }
                else if(j== i)
                {
                    z.push_back(1);
                }
                else 
                {
                    z.push_back(x[i-1][j-1]+x[i-1][j]);
                }
            }
            x.push_back(z);
        }
        return x;
        
    }
};