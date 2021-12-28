/*A sentence is a list of words that are separated by a single space with no leading or trailing spaces.

You are given an array of strings sentences, where each sentences[i] represents a single sentence.

Return the maximum number of words that appear in a single sentence.*/
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
            int count=0,max=0,i,k;
  
    for(i=0;i<sentences.size();i++)
    {
        string s=sentences[i];
        count=0;
        for(k=0;k<s.length();k++)
        {
  
           
            if(s[k]==' ')
            {
                 
                count++;
                if(count>max)
                {
                  
                    max=count;
                }
                
            }

        }
        
    }
    cout<<max+1;
        return max+1;
        
    }
};