/*You are given a 0-indexed string word, consisting of lowercase English letters. You need to select one index and remove the letter at that index from word so that the frequency of every letter present in word is equal.

Return true if it is possible to remove one letter so that the frequency of all letters in word are equal, and false otherwise.*/
class Solution {
public:
    bool equalFrequency(string word) {
        
    for (int i = 0; i < word.size(); i++)
    {
        unordered_map<char, int> mp;
        unordered_map<int, int> mp2;
        for(int j=0;j<word.size();j++)
        {
            if(i!=j )
            {
                mp[word[j]]++;
            }
        }
        for(auto it:mp)
        {
            mp2[it.second];
        }
        if(mp2.size()==1)
        {
            return true;
        }
    }
    return false;
        
    }
};