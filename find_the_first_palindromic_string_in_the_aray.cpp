/*Given an array of strings words, return the first palindromic string in the array. If there is no such string, return an empty string "".

A string is palindromic if it reads the same forward and backward.*/
class Solution {
public:
    string firstPalindrome(vector<string>& words) {
            int i;
    string x;
    string empty="";
    for(i=0;i<words.size();i++)
    {
        x=words[i];
        reverse(x.begin(),x.end());
        if(x==words[i])
        {
           return x;
        }

    }
        return empty;
        
    }
};