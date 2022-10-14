/*Given a parentheses string s containing only the characters '(' and ')'. A parentheses string is balanced if:

Any left parenthesis '(' must have a corresponding two consecutive right parenthesis '))'.
Left parenthesis '(' must go before the corresponding two consecutive right parenthesis '))'.
In other words, we treat '(' as an opening parenthesis and '))' as a closing parenthesis.

For example, "())", "())(())))" and "(())())))" are balanced, ")()", "()))" and "(()))" are not balanced.
You can insert the characters '(' and ')' at any position of the string to balance it if needed.

Return the minimum number of insertions needed to make s balanced.*/
class Solution {
public:
    int minInsertions(string s) {
            stack<char> x;
    int doub = 0;
    int i;
    int cnt = 0;
    for (i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
        {
            x.push(s[i]);
        }
        else
        {
            if (s[i] == s[i + 1])
            {
                if (x.size() > 0)
                {
                    x.pop();
                    i++;
                }
                else
                {
                    cnt++;
                    i++;
                }
            }
            else
            {
                if (x.size() > 0)
                {
                    cnt++;
                    x.pop();
                }
                else
                {
                    cnt += 2;
                }
            }
        }
    }
    if (!x.empty())
    {

 
        cnt += x.size() * 2;
    }
  
        return cnt;
    }
};