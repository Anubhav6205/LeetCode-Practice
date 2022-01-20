
/*A string is good if there are no repeated characters.

Given a string s​​​​​, return the number of good substrings of length three in s​​​​​​.

Note that if there are multiple occurrences of the same substring, every occurrence should be counted.

A substring is a contiguous sequence of characters in a string.

 */class Solution {
public:
    int countGoodSubstrings(string s) {
            int count=0;
    int i;
        if(s.length()==1 || s.length()==2 || s.length()==0)
        {
            return 0;
        }
    for(i=0;i<s.length()-2;i++)
    {
        if(s[i]!=s[i+1] && s[i]!=s[i+2] &&s[i+1]!=s[i+2])
        {
            count++;
        }
    }
    cout<<"count:"<<count;
        return count;
        
    }
};