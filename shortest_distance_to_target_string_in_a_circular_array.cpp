/*You are given a 0-indexed circular string array words and a string target. A circular array means that the array's end connects to the array's beginning.

Formally, the next element of words[i] is words[(i + 1) % n] and the previous element of words[i] is words[(i - 1 + n) % n], where n is the length of words.
Starting from startIndex, you can move to either the next word or the previous word with 1 step at a time.

Return the shortest distance needed to reach the string target. If the string target does not exist in words, return -1.*/
class Solution {

public:
    int closetTarget(vector<string>& words, string target, int startIndex) {
        
            int n=words.size();
    if(find(words.begin(), words.end(), target)==words.end())
    {
        return -1;
    }
         int i=startIndex;
    if(words[i]==target)
    {
        return 0;
    }
    int left=0,right=0;
    bool found=false;
   
    while(found==false)
    {
        i=(i - 1+n)%n;
        if(words[i]==target)
        {
            found=true;
        }
        left++;
      
    }
    found=false;
    i=startIndex;
    while(found==false)
    {
        i=(i+1)%n;
         if(words[i]==target)
        {
            found=true;
        }
        right++;


    }

    return min(left,right);
        
    }
};