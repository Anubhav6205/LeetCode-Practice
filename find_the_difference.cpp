/*You are given two strings s and t.

String t is generated by random shuffling string s and then add one more letter at a random position.

Return the letter that was added to t.*/
/*You are given two strings s and t.

String t is generated by random shuffling string s and then add one more letter at a random position.

Return the letter that was added to t.*/
class Solution {
public:
    char findTheDifference(string s, string t) {
            int i;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    for(i=0;i<s.length();i++)
    {
        if(s[i]!=t[i])
        {
            return t[i];
        }
    }
    return t[t.length()-1];
        
    }
};