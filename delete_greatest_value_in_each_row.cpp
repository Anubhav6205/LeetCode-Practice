/*You are given an m x n matrix grid consisting of positive integers.

Perform the following operation until grid becomes empty:

Delete the element with the greatest value from each row. If multiple such elements exist, delete any of them.
Add the maximum of deleted elements to the answer.
Note that the number of columns decreases by one after each operation.

Return the answer after performing the operations described above.*/
class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
          int mx = 0;
    int ans = 0;
    for (int i = 0; i < grid.size(); i++)
    {
        sort(grid[i].begin(), grid[i].end(), greater<int>());
    }
    int k = 0;
    while (k != grid[0].size())
    {
        mx=0;
        for (int i = 0; i < grid.size(); i++)
        {
            mx=max(mx,grid[i][k]);
        }
        ans+=mx;
        cout<<"here k="<<k<<endl;
        k++;

    }

    return ans;
        
    }
};