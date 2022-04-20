/*A sentence is a list of tokens separated by a single space with no leading or trailing spaces. Every token is either a positive number consisting of digits 0-9 with no leading zeros, or a word consisting of lowercase English letters.

For example, "a puppy has 2 eyes 4 legs" is a sentence with seven tokens: "2" and "4" are numbers and the other tokens such as "puppy" are words.
Given a string s representing a sentence, you need to check if all the numbers in s are strictly increasing from left to right (i.e., other than the last number, each number is strictly smaller than the number on its right in s).

Return true if so, or false otherwise.*/
class Solution {
public:
    bool areNumbersAscending(string s) {
        
           int x;
    int total=0;
    int max=0,i;
    vector<int>v;
   
    for(i=0;i<s.length();i++)
    {
        if(s[i] >='0' && s[i] <='9')
        {
            x=s[i]-'0';
 
            if(i+1!=s.length())
            {
            while(s[i+1] != ' ' &&s[i+1]>=0 && s[i+1] <='9' && i+1!=s.length())
            {
                x=(x*10)+(s[i+1]-'0');
                i++;
            }
            }
         
            v.push_back(x);
            
            
        }
    }
    for(i=0;i<v.size()-1;i++)
    {
   
        if(v[i]>=v[i+1])
        {
            return false;
        }
    }
  
        return true;
    
        
    }
};