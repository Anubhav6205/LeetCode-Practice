/*Two strings word1 and word2 are considered almost equivalent if the differences between the frequencies of each letter from 'a' to 'z' between word1 and word2 is at most 3.

Given two strings word1 and word2, each of length n, return true if word1 and word2 are almost equivalent, or false otherwise.

The frequency of a letter x is the number of times it occurs in the string.*?

class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        
    int arr[26]={0};
    int i,sum=0;

    for(i=0;i<word1.length();i++)
    {
        arr[word1[i]-'a']++;
        arr[word2[i]-'a']--;
    }

   
   for(int i=0;i<26;i++) {
            if(abs(arr[i])>3) {
                return false;
            }
        }
        return true;
        
    }
};