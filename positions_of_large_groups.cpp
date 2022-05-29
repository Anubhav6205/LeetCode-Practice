/*In a string s of lowercase letters, these letters form consecutive groups of the same character.

For example, a string like s = "abbxxxxzyy" has the groups "a", "bb", "xxxx", "z", and "yy".

A group is identified by an interval [start, end], where start and end denote the start and end indices (inclusive) of the group. In the above example, "xxxx" has the interval [3,6].

A group is considered large if it has 3 or more characters.

Return the intervals of every large group sorted in increasing order by start index*/

class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
            vector<vector<int>>ans;
    int i,j;
        if(s.length()<3)
        {
            return ans;
        }
    for(i=0;i<s.length()-2;i++)
    {
        
        vector<int>x;
        if(s[i]==s[i+1]&&s[i]==s[i+2])
        {
            
            int start=i,end;
            char c=s[i];
            for(j=i;j<s.length();j++)
            {
                
                if(c==s[j])
                {
                    end=j;
                }
                else
                {
                    break;
                }
            }
            i=j-1;
          
            x.push_back(start);
            x.push_back(end);
            ans.push_back(x);

        }
    }
        return ans;
        
    }
};