/*You are given a string s formed by digits and '#'. We want to map s to English lowercase characters as follows:

Characters ('a' to 'i') are represented by ('1' to '9') respectively.
Characters ('j' to 'z') are represented by ('10#' to '26#') respectively.
Return the string formed after mapping.*/
class Solution {
public:
    string freqAlphabets(string s) {
           string str;
    string x;
    int i;
    char zz;
    for(i=0;i<s.length();i++)
    {
        if(i+2<s.length() && s[i+2]=='#')
        {
            str+=s[i];
            str+=s[i+1];
            zz=stoi(str)+96;
            i+=2;
            x+=zz;
            str.clear();
            

        }
        else 
        {
             zz=s[i]+48;
            x+=zz;

        }
    }
    
        return x;
        
    }
};