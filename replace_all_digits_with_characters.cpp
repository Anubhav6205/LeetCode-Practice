/*You are given a 0-indexed string s that has lowercase English letters in its even indices and digits in its odd indices.

There is a function shift(c, x), where c is a character and x is a digit, that returns the xth character after c.

For example, shift('a', 5) = 'f' and shift('x', 0) = 'x'.
For every odd index i, you want to replace the digit s[i] with shift(s[i-1], s[i]).

Return s after replacing all digits. It is guaranteed that shift(s[i-1], s[i]) will never exceed 'z'*/
class Solution {
public:
    string replaceDigits(string s) {
            char prev;
    int i;
    string x;
    for(i=0;i<s.length();i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            prev=s[i];
            x.push_back(s[i]);
        
        }
        else
        {
            int conv=(int)s[i]-48;
            char z=prev+conv;
            x.push_back(z);
        }
    }
    cout<<x;
        return x;
        
    }
};