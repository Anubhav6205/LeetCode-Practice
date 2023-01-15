/*Given a string s, find the length of the longest substring without repeating characters.*/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         unordered_map<char,int>mp;
    int mx=0;
    int cnt=0;
           int k=0;
    for(int i=0; i<s.length(); i++)
    {
        mp[s[i]]++;
     
     
        while(mp[s[i]]>1)
        {
            mp[s[k]]--;
            cnt--;
            k++;

        }

        cnt++;
    
        mx=max(mx,cnt);
   
        
    }
    
        return mx;
        
    }
};