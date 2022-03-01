/*You are given an array of strings words and a string pref.

Return the number of strings in words that contain pref as a prefix.

A prefix of a string s is any leading contiguous substring of s.*/
class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
            string x;
    int i,cnt=0;
    for(i=0;i<words.size();i++)
    {
        x=words[i];
        if(x.find(pref)==0)
        {
            cnt++;
        }
        
    }
    return cnt;
        
    }
};