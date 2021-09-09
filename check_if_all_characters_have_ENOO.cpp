/*Given a string s, return true if s is a good string, or false otherwise.

A string s is good if all the characters that appear in s have the same number of occurrences (i.e., the same frequency).

 */

class Solution {
public:
    bool areOccurrencesEqual(string s) {
            int len=s.length();
            string s2=s;
    s2.erase(unique(s2.begin(),s2.end()),s2.end());
    if(s2.length()==1)
    {
        return true;
    }
    int count=1;
    int i;
    sort(s.begin(),s.end());
    for(i=0;s[i]==s[i+1];i++)
    {
    
        count++;
    }

    int nexc=1;
    for(i=0;i<len;i++)
    {
        if(s[i]==s[i+1])
        {
            nexc++;
        }
        if(s[i]!=s[i+1]&& nexc!=count)
        {
            
            return false;
            
        }
        if(s[i]!=s[i+1]&& nexc==count)
        {
            
            nexc=1;
            
        }
        
    }
        return true;
        
    }
};//completed