/*Given an array of strings patterns and a string word, return the number of strings in patterns that exist as a substring in word.

A substring is a contiguous sequence of characters within a string.*/
class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        
            int cnt=0;
    int i;
    for(i=0;i<patterns.size();i++)
    {
        cout<<"find:"<<word.find(patterns[i])<<endl;
        int x=word.find(patterns[i]);
        if(x>-1 && x<100)
        {
            cnt++;
        }
    }
  
        return cnt;

        
    }
};