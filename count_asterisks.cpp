/*You are given a string s, where every two consecutive vertical bars '|' are grouped into a pair. In other words, the 1st and 2nd '|' make a pair, the 3rd and 4th '|' make a pair, and so forth.

Return the number of '*' in s, excluding the '*' between each pair of '|'.

Note that each '|' will belong to exactly one pair.

 */

class Solution {
public:
    int countAsterisks(string s) {
        
          stack<char>x;
    int i,cnt=0;
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='|')
        {
            if(x.empty())
            {
                x.push('|');
            }
            else
            {
                x.pop();
            }
        }
        else if(s[i]=='*')
        {
            
            if(x.empty())
            {
                cnt++;
            }
            

        }
    }
        return cnt ;
        
    }
};