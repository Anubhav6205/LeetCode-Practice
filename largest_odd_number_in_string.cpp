/*You are given a string num, representing a large integer. Return the largest-valued odd integer (as a string) that is a non-empty substring of num, or an empty string "" if no odd integer exists.

A substring is a contiguous sequence of characters within a string.*/

class Solution {
public:
    string largestOddNumber(string num) {
        
    int i;
    int x;
    string s;
    for(i=num.length()-1;i>=0;i--)
    {
        x=num[i]-'0';
        if(x%2!=0)
        {
            s=num.substr(0,i+1);
            return s;


        }
                
    }
    return "";
        
    }
};