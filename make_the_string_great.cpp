/*Given a string s of lower and upper case English letters.

A good string is a string which doesn't have two adjacent characters s[i] and s[i + 1] where:

0 <= i <= s.length - 2
s[i] is a lower-case letter and s[i + 1] is the same letter but in upper-case or vice-versa.
To make the string good, you can choose two adjacent characters that make the string bad and remove them. You can keep doing this until the string becomes good.

Return the string after making it good. The answer is guaranteed to be unique under the given constraints.

Notice that an empty string is also good.*/
class Solution {
public:
    string makeGood(string s) {
        
            stack<char>x;
    x.push(s[0]);
    string str="";
    int i;
    for(i=1;i<s.length();i++)
    {
        if(x.size()>0 &&(x.top()==(s[i]-32)|| x.top()==(s[i]+32)) )
        {
            x.pop();
        }
        else
        {
            x.push(s[i]);
        }
     


        
    }
    while(!x.empty())
    {
  
        str+=x.top();
        x.pop();
    }
    reverse(str.begin(),str.end());

        return str;
        
    }
};