/*A pangram is a sentence where every letter of the English alphabet appears at least once.

Given a string sentence containing only lowercase English letters, return true if sentence is a pangram, or false otherwise.*/
class Solution {
public:
    bool checkIfPangram(string sentence) {
            int arr[26]={0},flag=0;
 

    int i;
    for(i=0;i<sentence.length();i++)
    {
      //  cout<<sentence[i]-'a'<<" ";
        ++arr[sentence[i]-'a'];
    }
    for(i=0;i<26;i++)
    {
       if(arr[i]==0)
       {
           flag=1;
       }
    }
    if(flag==1)
    {
        return false;
    }
    return true;


        
    }
};