/*Given a pattern and a string s, find if s follows the same pattern.

Here follow means a full match, such that there is a bijection between a letter in pattern and a non-empty word in s.*/

class Solution {
public:
    bool wordPattern(string pattern, string s) {
            unordered_map<char,string>mp;
        unordered_map<string,char>mp2;
    int i;
    vector<string>x;
    s+=' '; 
    string str;
    for(i=0;i<s.length();i++)
    {
        if(s[i]==' ')
        {
            x.push_back(str);
            str.clear();
        }
        else
        {
            str+=s[i];
        }
    }
        if(pattern.size()!=x.size())   return false;

    for(string sss:x)
    {
        cout<<sss<<endl;
    }

    for(i=0;i<x.size();i++)
    {
        if(mp[pattern[i]]!="" && mp[pattern[i]]!=x[i])
        {
            return false;

        }
        if(mp2[x[i]] && mp2[x[i]]!=pattern[i])
        {
            return false;
        }
        mp[pattern[i]]=x[i];
        mp2[x[i]]=pattern[i];
    }
    return true;
        
    }
};