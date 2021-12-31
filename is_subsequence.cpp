/*Given two strings s and t, return true if s is a subsequence of t, or false otherwise.

A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).?*

class Solution {
public:
    bool isSubsequence(string s, string t) {
            int i,j=0,check=0;
    for(i=0;i<t.length();i++)
    {
        if(t[i]==s[j])
        {
            check++;
            j++;
        }
    }
    if(check==s.length())
    {
        return true;
    }
    else
    {
        return false;
    }
        
    }
};