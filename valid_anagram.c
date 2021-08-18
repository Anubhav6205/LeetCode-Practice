/*Given two strings s and t, return true if t is an anagram of s, and false otherwise.*/
class Solution {
public:
    bool isAnagram(string s, string t) {
        int i;
        int ss=s.length();
        int tt=t.length();

        if(ss!=tt)
        {
            return false;
        }
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int res=s.compare(t);
        
        if(res==0)
        {
            return true;
        }
        return false;
        
    }
};