/*Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.*/
class Solution {
public:
    bool isValid(string s) {
     if(checkparin(s)==1)
    {
         return true;
        cout<<"Valid"<<endl;
    }
    else 
    {
        return false;
        cout<<"Invalid"<<endl;
    }

        
    }
    
    int checkparin(string s)
{
    stack<char>x;
    int i;
    for(i=0; i<s.length(); i++)
    {
        if(s[i]=='('|| s[i]=='{'||s[i]=='[')
        {
            x.push(s[i]);
        }
        else if(s[i]==']')
        {
               
            if(x.empty()==true)
            {
                return 0;
            }
            if(x.top()!='[')
            {
                return 0;
            }
            x.pop();
        }
        else if(s[i]=='}')
        {
            
            if(x.empty()==true)
            {
                return 0;
            }

            if(x.top()!='{')
            {
                return 0;
            }
            x.pop();
        }
        else if(s[i]==')')
        {
               
            if(x.empty()==true)
            {
                return 0;
            }
            if(x.top()!='(')
            {
                return 0;
            }
            x.pop();
        }
    }
    if(x.empty()==true)
    {
        return 1;

    }
    return 0;
}
};