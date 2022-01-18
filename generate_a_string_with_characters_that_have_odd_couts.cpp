/*Given an integer n, return a string with n characters such that each character in such string occurs an odd number of times.

The returned string must contain only lowercase English letters. If there are multiples valid strings, return any of them. */
class Solution {
public:
    string generateTheString(int n) {
    int i,j;
    string s;
   if(n%2==1)
   {
       while(n--)
       {
           s.push_back('a');

       }
   }
   else
   {
       i=n/2;
       if(i%2==0)
       {
           i=(n/2)+1;
           j=(n/2)-1;

       }
       else if(i/2==1)
       {
           i=n/2;
           j=n/2;
       }
       while(i--)
       {
           s.push_back('a');
       }
       while(j--)
       {
           s.push_back('b');
       }
   }
   cout<<"S:"<<s<<endl;
    return s;
    }
};