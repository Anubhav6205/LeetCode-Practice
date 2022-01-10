/*You are given a string s representing an attendance record for a student where each character signifies whether the student was absent, late, or present on that day. The record only contains the following three characters:

'A': Absent.
'L': Late.
'P': Present.
The student is eligible for an attendance award if they meet both of the following criteria:

The student was absent ('A') for strictly fewer than 2 days total.
The student was never late ('L') for 3 or more consecutive days.
Return true if the student is eligible for an attendance award, or false otherwise.

 */
class Solution {
public:
    bool checkRecord(string s) {
            int c1=0,c2=0,i=0,x=0;;
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='A')
        {
            c1++;
            x=0;
        }
        if(s[i]=='P')
        {
            x=0;
        }
        if(s[i]=='L')
        {
            x++;
            if(x==3)
            {
                c2=100;
            }
        }
    }
        cout<<"c1:"<<c1<<" c2:"<<c2<<endl;
    if(c1<2&&c2<=3)
    {
        return true;
    }
    return false;
        
    }
};