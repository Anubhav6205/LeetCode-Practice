/*You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string.

Return the merged string.

 */

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
            string fuck=word1+word2;
    string merged;
    int i;
    int first=0,second=0;
    int length=(word1.length()+word2.length()); 
    int hex=0;
    if(word1.length()==word2.length())
    {
    for(i=0;i<length;i++)
    {
        if(hex%2==0)
        {
            merged.push_back(word1[first]);
            hex++;
            first++;
        }
        else if(hex%2!=0)
        {
            merged.push_back(word2[second]);
            second++;
            hex++;
        }
    }
    
    }
    else
    {
        int minsize;
        string  max;
        if(word1.length()>word2.length())
        {
            minsize=word2.length();
            max=word1;
        }
        else
        {
            minsize=word1.length();
            max=word2;
        }

        for(i=0;i<minsize*2;i++)
        {
        if(hex%2==0)
        {
            merged.push_back(word1[first]);
            hex++;
            first++;
        }
        else if(hex%2!=0)
        {
            merged.push_back(word2[second]);
            second++;
            hex++;
        }

        }
        for(i=minsize;i<=max.length();i++)
        {
            merged.push_back(max[i]);
        }
        
    }
    
    for(i=0;i<length;i++)
    {
        fuck[i]=merged[i];
    }
        return fuck;
        
    }
};//completed