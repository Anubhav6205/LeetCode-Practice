/*You are given an m x n binary matrix mat of 1's (representing soldiers) and 0's (representing civilians). The soldiers are positioned in front of the civilians. That is, all the 1's will appear to the left of all the 0's in each row.

A row i is weaker than a row j if one of the following is true:

The number of soldiers in row i is less than the number of soldiers in row j.
Both rows have the same number of soldiers and i < j.
Return the indices of the k weakest rows in the matrix ordered from weakest to strongest.*/
class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
         typedef pair<int, int> pi;
  
  

  
      priority_queue<pi, vector<pi>, greater<pi> > pq;

    int cnt = 0, i, j;
    for (i = 0; i < mat.size(); i++)
    {
        cnt = 0;
        for (j = 0; j < mat[0].size(); j++)
        {
            if (mat[i][j] == 1)
            {
                cnt++;
            }
        }
        pq.push({cnt, i});
    }
    vector<int>ans;

    while (k!=0)
    {
        
        ans.push_back(pq.top().second);
        pq.pop();
        k--;
    }
        return ans;
        
    }
};