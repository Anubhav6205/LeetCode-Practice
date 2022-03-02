/*A fancy string is a string where no three consecutive characters are equal.

Given a string s, delete the minimum possible number of characters from s to make it fancy.

Return the final string after the deletion. It can be shown that the answer will always be unique.

 */
class Solution {
public:
    string makeFancyString(string s) {
            int i;
    string x;
    for(i=0;i<s.length();i++)
    {
        if(s[i]== s[i+1]&& s[i+1]==s[i+2])
        {
            
        }
        else
        {
            x+=s[i];
        }
    }
    cout<<x;
        return x;
        
    }
};