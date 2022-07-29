/*You are given an integer array matches where matches[i] = [winneri, loseri] indicates that the player winneri defeated player loseri in a match.

Return a list answer of size 2 where:

answer[0] is a list of all players that have not lost any matches.
answer[1] is a list of all players that have lost exactly one match.
The values in the two lists should be returned in increasing order.

Note:

You should only consider the players that have played at least one match.
The testcases will be generated such that no two matches will have the same outcome.*/
class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
            vector<vector<int>>ans;
    unordered_map<int,int>loser,winner;
    for(int i=0;i<matches.size();i++) {
        loser[matches[i][1]]++;
        winner[matches[i][0]]=1;
    }

    vector<int>zero,first;
    for(auto it:winner)
    {
        if(!(loser[it.first]))
        {
            zero.push_back(it.first);
        }
    }

    for(auto it:loser)
    {
        if(it.second==1)
        {
            first.push_back(it.first);
        }
    }
    sort(zero.begin(), zero.end());
    sort(first.begin(), first.end());

    ans.push_back(zero);
    ans.push_back(first);
        return ans;
        
    }
};