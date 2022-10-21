/*You are given a string s, which contains stars *.

In one operation, you can:

Choose a star in s.
Remove the closest non-star character to its left, as well as remove the star itself.
Return the string after all stars have been removed.

Note:

The input will be generated such that the operation is always possible.
It can be shown that the resulting string will always be unique.*/
class Solution {
public:
    string removeStars(string s) {
            int i;
        string ans="";
    int stars = 0;
    for (i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] == '*')
        {
            stars++;
        }
        else
        {
            if (stars > 0)
            {
                stars--;
                continue;
            }
            else
            {
                ans+=s[i];
            }
        }
    }
    reverse(ans.begin(),ans.end());
    cout<<ans;
    return ans;
        
    }
};