/*Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s.

A shift on s consists of moving the leftmost character of s to the rightmost position.

For example, if s = "abcde", then it will be "bcdea" after one shift.
*/

class Solution {
public:
    bool rotateString(string s, string goal) {
        string s1;
        if(goal.length()!=s.length())
        {
      
            return false;
        }
        s1=s+s;
        int flag=0,i,j=0,k=0;
        for(i=0;i<s1.length();i++)
        {
            string ss=s1.substr(i,i+s.length()-k);
            {
                cout<<ss<<endl;
                k++;
                if(ss==goal)
                {
                    return true;
                }
            }
            
        }
      
        return false;
        
    }
};