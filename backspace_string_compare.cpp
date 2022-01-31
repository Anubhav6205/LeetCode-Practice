/*Given two strings s and t, return true if they are equal when both are typed into empty text editors. '#' means a backspace character.

Note that after backspacing an empty text, the text will continue empty.

 */
class Solution {
public:
    bool backspaceCompare(string s, string t) {
            string a,b;
    int i=0;
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='#' && i!=0 )
        {
            if(a.length()!=0)
            {
            a.pop_back();
            }
            
        }
        else if(s[i]>='a' && s[i]<='z')
        {
            a.push_back(s[i]);
        }
     
        
    }
     for(i=0;i<t.length();i++)
    {
        if(t[i]=='#' && i!=0)
        {
              if(b.length()!=0)
            {
                b.pop_back();
            }
        }
        else if(t[i]>='a' && t[i]<='z')
        {
            b.push_back(t[i]);
        }
     
        
    }
    cout<<"a:"<<a<<"\nb:"<<b;
    if(a==b)
    {
       return true;
    }
    return false;
        
    }
};