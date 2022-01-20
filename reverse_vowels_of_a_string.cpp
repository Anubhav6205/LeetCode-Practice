/*Given a string s, reverse only all the vowels in the string and return it.

The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both cases.*/
class Solution {
public:
    string reverseVowels(string s) {
            vector<char>x;
    int i;
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='a' ||s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ||s[i]=='A' ||s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' )
        {
            x.push_back(s[i]);
        }
    }
    cout<<"String before "<<s;
    int k=x.size()-1;
    for(i=0;i<s.length();i++)
    {
         if(s[i]=='a' ||s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ||s[i]=='A' ||s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' )
        {
            s[i]=x[k];
            k--;
            
        }

    }
    cout<<"String before "<<s;
        return s;
        
    }
};