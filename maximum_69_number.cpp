/*Given a positive integer num consisting only of digits 6 and 9.

Return the maximum number you can get by changing at most one digit (6 becomes 9, and 9 becomes 6).*/

class Solution {
public:
    int maximum69Number (int num) {
            string str;
    int i=0;
    int flag=0;
    str=to_string(num);
    for(i=0;i<str.length();i++)
    {
        if(str[i]=='6')
        {
            str[i]='9';
            break;
         
        }

    }
    stringstream geek(str);
    int x=0;
    geek>>x;
        return x;
        
    }
};//completed