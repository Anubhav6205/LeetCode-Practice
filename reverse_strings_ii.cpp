/*Given a string s and an integer k, reverse the first k characters for every 2k characters counting from the start of the string.

If there are fewer than k characters left, reverse all of them. If there are less than 2k but greater than or equal to k characters, then reverse the first k characters and leave the other as original.*/
class Solution {
public:
    string reverseStr(string s, int k) {
    stack<int>x;
    int i;
    int store=k;
    int check=0;
    string str="";
    string help="";
    for(i=0;i<s.length();i++)
    {
        if(check==0)//push to stack and reverse
        {
            if(i+k<s.length())
            {
                help=s.substr(i,k);
           
                reverse(help.begin(),help.end());
                str+=help;
                i+=k-1;
             

            }
            else
            {
                help=s.substr(i,s.length());
               
                reverse(help.begin(),help.end());
                str+=help;
                i=s.length()-1;
                
            }
            check=1;

        }
        else if(check==1)
        {
              if(i+k<s.length())
            {
       
                help=s.substr(i,k);
           
           
                str+=help;
                i+=k-1;
                

            }
            else
            {
                help=s.substr(i,s.length());
    
    
                str+=help;
                i=s.length()-1;

            }
            check=0;
        }
 
    
    }
 
        return str;
        
    }
};