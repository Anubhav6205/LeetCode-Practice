/*Given a binary string s ​​​​​without leading zeros, return true​​​ if s contains at most one contiguous segment of ones. Otherwise, return false.*/
class Solution {
public:
    bool checkOnesSegment(string s) {
    int i;
        if(s.length()==1)
        {
            return true;
        }
    int flag=0;
    for(i=0;i<s.length()-1;i++)
    {
        cout<<"s[i]:"<<s[i]<<endl<<"s[i+1]:"<<s[i+1]<<endl;
        if(s[i]=='0' && s[i+1]=='1')
        {
            cout<<"increment"<<endl;
            flag++;
        }
    }
    if(flag>0)
    {
        return false;

    }
    else
    {
        return true;

    }
        
    }
};