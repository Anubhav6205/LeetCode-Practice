/*Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1*/
class Solution {
public:
    int firstUniqChar(string s) {
        
            int arr[28]={0};
    int i;
    for(i=0; i<s.length(); i++)
    {
        ++arr[s[i]-'a'];
    }
    for(i=0;i<s.length();i++){
        if(arr[s[i]-'a']==1)
        {
            return i;

            
        }
    }
    return -1;
        
    }
};