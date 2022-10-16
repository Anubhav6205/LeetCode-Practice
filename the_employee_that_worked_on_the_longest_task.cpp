class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
            int max=logs[0][1];
    int maxID=logs[0][0];
    int diff=0;
    for(int i=1;i<logs.size();i++)
    {
        if(max<logs[i][1]-logs[i-1][1])
        {
            max=logs[i][1]-logs[i-1][1];
            maxID=logs[i][0];
        }
        else if(max==logs[i][1]-logs[i-1][1] && logs[i][0]<maxID)
        {
            maxID=logs[i][0];
        }


    }

        return maxID;
    }
};