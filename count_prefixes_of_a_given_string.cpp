/*You are given a string array words and a string s, where words[i] and s comprise only of lowercase English letters.

Return the number of strings in words that are a prefix of s.

A prefix of a string is a substring that occurs at the beginning of the string. A substring is a contiguous sequence of characters within a string.*/
class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
            int i;
    int cnt=0;
    for(i=0;i<words.size();i++)
    {
        if(s.find(words[i])==0)
        {
            cnt++;
        }
    }

        return cnt;
        
    }
};