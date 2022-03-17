/*A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

 */
class Solution {
public:
    bool isPalindrome(string s) {
            string x="";
    char z;
    int i;
    for(i=0;i<s.length();i++)
    {
        if((s[i]>='A' && s[i]<='Z') ||(s[i]>='a' && s[i]<='z' ||(s[i]>='0' && s[i]<='9')))
        {
            z=s[i];
            if(z>='A' && z<='Z')
            {
                z+=32;
            }
            x+=z;

        }

    }
  
    s=x;
    reverse(x.begin(),x.end());
    if(s==x)
    {
        return true;
        cout<<"same";
    }
    else
    {
        return false;
        cout<<"different";
    }
        
    }
};