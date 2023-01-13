/**/
class Solution {
public:
    int similarPairs(vector<string>& words) {
            map<set<char>, int> mp;
    int i, j;
    for (i = 0; i < words.size(); i++)
    {
        set<char> s(words[i].begin(), words[i].end());
        
        mp[s]++;
    }
    int sum=0;
    for(auto it : mp)
    {
        sum+=(it.second*(it.second-1))/2;
        
    }
   
        return sum;
        
    }
};