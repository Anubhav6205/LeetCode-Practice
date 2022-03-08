/*Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

 */
class Solution {
public:
    string reverseWords(string s) {
           int i=0;
   string x="",word="";
        int k=1;
   string blank;
   for(i=0;i<s.length();i++)
   {
       if(s[i]!=' ')
       {
           
           word.push_back(s[i]);
           
       }
     
       else
       {
         
           
           reverse(word.begin(), word.end());
           if(k!=1)
           {
               x.push_back(' ');
           }
           k++;
           x+=word;
           word=blank;
       }
     
   }
   if(word!=blank)
   {
         if(k!=1)
           {
               x.push_back(' ');
           }
     
         reverse(word.begin(), word.end());
         x+=word;     
   }
     
   cout<<x;
        return x;
    }
};