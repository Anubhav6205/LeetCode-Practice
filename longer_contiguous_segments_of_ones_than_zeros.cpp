/*Given a binary string s, return true if the longest contiguous segment of 1's is strictly longer than the longest contiguous segment of 0's in s, or return false otherwise.

For example, in s = "110100010" the longest continuous segment of 1s has length 2, and the longest continuous segment of 0s has length 3.
Note that if there are no 0's, then the longest continuous segment of 0's is considered to have a length 0. The same applies if there is no 1's.

 */class Solution {
public:
    bool checkZeroOnes(string s) {
        
            int i,sum1=0,max1=-69;
    int sum2=0,max2=-69;
        if(s.length()==1 && s[0]=='1')
        {
            return true;
        }
          if(s.length()==1 && s[0]=='0')
        {
            return false;
        }
            
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='1' && s[i+1]=='1')
        {
            sum1++;
        }
        if(s[i]=='0' && s[i+1]=='0')
        {
            sum2++;
        }
        if(s[i]=='1')
        {
            sum2=0;
        }
        if(s[i]=='0')
        {
            sum1=0;
        }
        if(sum1>max1)
        {
            max1=sum1;
        }
        if(sum2>max2)
        {
            max2=sum2;
        }


    }
    if(max1>max2)
    {
        cout<<"True";
        return true;
    }
    else
    {
        cout<<"False";
        return false;
    }
        
    }
};