
/*Given a string s which consists of lowercase or uppercase letters, return the length of the longest palindrome that can be built with those letters.

Letters are case sensitive, for example, "Aa" is not considered a palindrome here.*/class Solution {
public:
    int longestPalindrome(string s) {
        
           map<char, int> mp;
    for (char c : s)
    {
        ++mp[c];
    }
    

    int cnt = 0;
    for (auto it : mp)
    {
       
        while (it.second != 0 && it.second  != 1)
        {
            it.second = it.second - 2;
            mp[it.first]-=2;
            cnt+=2;
 
        }
    }

     for (auto it : mp)
    {
        if(it.second==1)
        {
            cnt++;
            break;
        }
    }

        return cnt;
        
    }
};