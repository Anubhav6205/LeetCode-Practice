/*Given two string arrays word1 and word2, return true if the two arrays represent the same string, and false otherwise.

A string is represented by an array if the array elements concatenated in order forms the string.*?

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1,s2;
        string sel;
        int i,j,k=0;
        for(i=0;i<word1.size();i++)
        {
            s1=s1+(word1[i]);
        }
        for(j=0;j<word2.size();j++)
        {
            s2=s2+(word2[j]);
        }
        
        if(s1==s2)
        {
            return true;
        }
        return false;
        
    }
};