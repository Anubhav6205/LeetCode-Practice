/*Balanced strings are those that have an equal quantity of 'L' and 'R' characters.

Given a balanced string s, split it in the maximum amount of balanced strings.

Return the maximum amount of split balanced strings.*/
class Solution {
public:
    int balancedStringSplit(string s) {
            int i;
    int cnt=0;
    int chk=0;
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='R')
        {
            cnt--;
        }
        else if(s[i]=='L')
        {
            cnt++;
        }
        if(cnt==0)
        {
            chk++;

        }
    }
        return chk;
    cout<<chk<<endl;

        
    }
};