/*Given a string s, return the number of palindromic substrings in it.

A string is a palindrome when it reads the same backward as forward.

A substring is a contiguous sequence of characters within the string.*/
class Solution {
public:
    int countSubstrings(string s) {
        
            int size=s.length();
    int i;
    int start,end;
    int cnt=0;
    for(i=0;i<size;i++)
    {
        start=i;
        end=i;
      
        while(start>=0 && end<size && s[start--] ==s[end++])
        {
            cnt++;
        }
        start=i-1;
        end=i;
        while(start>=0 && end<size && s[start--] ==s[end++])
        {
            cnt++;
        }

        
    }
    cout<<cnt<<endl;
        return cnt;
        
    }
};