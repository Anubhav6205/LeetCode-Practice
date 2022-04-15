/*Given a string s, return the length of the longest substring between two equal characters, excluding the two characters. If there is no such substring return -1.

A substring is a contiguous sequence of characters within a string.*/
class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
           int maxx=-1;
    int i,j;

    for(i=0;i<s.length();i++)
    {
        for(j=0;j<s.length();j++)
        {
            if(s[i]==s[j])
            {
                maxx=max(maxx,abs(i-j)-1);
            }
        }
    }
    
    cout<<maxx;
        return maxx;
    }
};