/*You are given two strings s1 and s2 of equal length. A string swap is an operation where you choose two indices in a string (not necessarily different) and swap the characters at these indices.

Return true if it is possible to make both strings equal by performing at most one string swap on exactly one of the strings. Otherwise, return false.*/
class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
    char s1sav1='1',s1sav2='1';
    char s2sav1='1',s2sav2='1';
    
    if(s1.length()!=s2.length())
    {
        return false;
    }
    int i,diff=0;
    for(i=0;i<s1.length();i++)
    {
       if(s1[i]!=s2[i])
       {
           diff++;
           if(s1sav1=='1' && s2sav1=='1')
           {
               s1sav1=s1[i];
               s2sav1=s2[i];
           }
           else
           {
               s1sav2=s1[i];
               s2sav2=s2[i];
           }
           if(diff>2)
           {
               return false;
           }
       } 
    }

    if(s1sav1!=s2sav2 || s1sav2!=s2sav1)
    {
      
        return false;
    }
    return true;     
    }
};