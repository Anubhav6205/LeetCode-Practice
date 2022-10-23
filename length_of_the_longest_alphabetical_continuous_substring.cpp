/*An alphabetical continuous string is a string consisting of consecutive letters in the alphabet. In other words, it is any substring of the string "abcdefghijklmnopqrstuvwxyz".

For example, "abc" is an alphabetical continuous string, while "acb" and "za" are not.
Given a string s consisting of lowercase letters only, return the length of the longest alphabetical continuous substring.*/
class Solution {
public:
    int longestContinuousSubstring(string s) {
          vector<int>dp(s.length(),1);
    int mx=-1;
    for(int i=1;i<s.length();i++)
    {
        if(s[i]-s[i-1]==1)
        {
            dp[i]+=dp[i-1];
        }
        else
        {
            dp[i]=1;
        }
        
        mx = max(mx,dp[i]);

    }
        if(s.length()==1)
        {
            return 1;
        }
        return mx;
        
    }
};