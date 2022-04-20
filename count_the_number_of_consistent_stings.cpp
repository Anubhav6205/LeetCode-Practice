/*You are given a string allowed consisting of distinct characters and an array of strings words. A string is consistent if all characters in the string appear in the string allowed.

Return the number of consistent strings in the array words.

*/

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {  int arr[26]={0};
    int i=0,j,cnt=0;
    int wordcnt=0;
    int notfound=1;
    string str;
    for(i=0;i<allowed.length();i++)
    {
        ++arr[allowed[i]-'a'];
    }
    for(i=0;i<words.size();i++)
    {
        str=words[i];
        for(j=0;j<str.length();j++)
        {
            if(arr[str[j]-'a']>0)
            {
                  
                wordcnt++;
                

            }
            else 
            {
                notfound=0;
                  
                break;
            }
          
           
        }
      
        if(wordcnt>=str.length() && notfound==1)
        {

            cnt++;
         
        }
           notfound=1;
         wordcnt=0;

    }

    
                                                                       return cnt;
        
    }
};