/*Given a string s, reverse the string according to the following rules:

All the characters that are not English letters remain in the same position.
All the English letters (lowercase or uppercase) should be reversed.
Return s after reversing it.*/
class Solution {
public:
    string reverseOnlyLetters(string s) {
        
    vector<char>x;
    in
    for(i=0;i<s.length();i++)
    {
        if((s[i]>='a' &&s[i]<='z') ||(s[i]>='A' &&s[i]<='Z') )
        {
            x.push_back(s[i]);
        }
    }
    cout<<"String before "<<s;
    int k=x.size()-1;
    for(i=0;i<s.length();i++)
    {
         if((s[i]>='a' &&s[i]<='z') ||(s[i]>='A' &&s[i]<='Z'))
        {
            s[i]=x[k];
            k--;
            
        }

    }
    cout<<"String before "<<s;
        return s;
        
    }
};