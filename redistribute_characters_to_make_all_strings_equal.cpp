/*You are given an array of strings words (0-indexed).

In one operation, pick two distinct indices i and j, where words[i] is a non-empty string, and move any character from words[i] to any position in words[j].

Return true if you can make every string in words equal using any number of operations, and false otherwise.

 */
class Solution {
public:
    bool makeEqual(vector<string>& words) {
            int arr[26]={0};
    int i,j;
    string str;
    int size=words.size();
        if(words.size()==1)
        {
            return true;
        }
    for(i=0;i<words.size();i++)
    {
        str=words[i];
        for(j=0;j<str.length();j++)
        {
            
            ++arr[str[j]-'a'];

        }
    }

    for(i=0;i<26;i++)
    {
        if(arr[i]%size!=0)
        {
            return false;
        }
    }
    return true;
        
    }
};