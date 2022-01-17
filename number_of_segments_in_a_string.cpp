/*Given a string s, return the number of segments in the string.

A segment is defined to be a contiguous sequence of non-space characters.

 */
class Solution {
public:
    int countSegments(string s) {
            int i,space=1;
    int count=0;
    for(i=0;i<s.length();i++)
    {
        if(s[i]==' ')
        {
            space=1;
        }
        if(space==1 && s[i]!=' ')
        {
            count++;
            space=0;
            cout<<"Fuck"<<endl;
        }

    }
        return count;
        
    }
};