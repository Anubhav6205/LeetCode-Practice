/*You are given an array of equal-length strings words. Assume that the length of each string is n.

Each string words[i] can be converted into a difference integer array difference[i] of length n - 1 where difference[i][j] = words[i][j+1] - words[i][j] where 0 <= j <= n - 2. Note that the difference between two letters is the difference between their positions in the alphabet i.e. the position of 'a' is 0, 'b' is 1, and 'z' is 25.

For example, for the string "acb", the difference integer array is [2 - 0, 1 - 2] = [2, -1].
All the strings in words have the same difference integer array, except one. You should find that string.

Return the string in words that has different difference integer array*/
class Solution {
public:
    string oddString(vector<string>& words) {
            vector<vector<int>>x;
    int i,j;
    for(i=0;i<words.size();i++)
    {
        vector<int>z;
        for(j=0;j<words[i].size()-1;j++)
        {
            z.push_back(words[i][j+1]-words[i][j]);
        }
        x.push_back(z);
    }

  
    if(x[0]==x[1])
    {
        for(i=2;i<x.size();i++)
        {
            if(x[0]!=x[i])
            {
                return words[i];
            }
        }
        
    }
    else
    {
        if(x[2]==x[0])
        {
            return words[1];
        }
        else
        {
            return words[0];
        }

    }
    return words[0];
    }
};