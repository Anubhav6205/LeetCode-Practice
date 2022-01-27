/*Given a string s and an array of strings words, determine whether s is a prefix string of words.

A string s is a prefix string of words if s can be made by concatenating the first k strings in words for some positive k no larger than words.length.

Return true if s is a prefix string of words, or false otherwise.*/
class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
            string z;
   
    int i,flag=0;
    for(i=0;i<words.size();i++)
    {
        
        z.append(words[i]);
        if(z==s)
        {
            flag=1;
            goto label;
        }
       
    

    }
    label:
    if(flag==0)
    {
        return false;
    }
    return true;
        
    }
};