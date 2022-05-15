/*Two strings word1 and word2 are considered almost equivalent if the differences between the frequencies of each letter from 'a' to 'z' between word1 and word2 is at most 3.

Given two strings word1 and word2, each of length n, return true if word1 and word2 are almost equivalent, or false otherwise.

The frequency of a letter x is the number of times it occurs in the string.*/
class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
            map<char,int>mp1;
    int i;
    for(i=0;i<word1.length();i++)
    {
        mp1[word1[i]]++;
    }

    for(i=0;i<word2.length();i++)
    {
        mp1[word2[i]]--;
    }

     for(auto iterator: mp1) 
    {
       if(iterator.second>3 || iterator.second<-3)
       {
           return false;
       }
    }
    return true;
        
    }
};