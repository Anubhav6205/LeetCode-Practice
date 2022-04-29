/*You are given an array of strings words and a string chars.

A string is good if it can be formed by characters from chars (each character can only be used once).

Return the sum of lengths of all good strings in words.*/
class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        
        
    int charscount[26]={0};

    string str="";
    int flag=0;
    int cnt=0;
    int i=0;
    for(i=0;i<chars.length();i++){
      
        ++charscount[chars[i]-'a'];
    }

     
    

    

    int j,k;
    for(i=0;i<words.size();i++)
    {
        str=words[i];
        int wordscnt[26]={0};
        for(j=0;j<str.length();j++){
            ++wordscnt[str[j]-'a'];

        }
        for(j=0;j<str.length();j++){
          
            if(charscount[str[j]-'a']<wordscnt[str[j]-'a'])
            {
                flag=1;
              
            }
        }

        if(flag==1)
        {
            flag=0;
        }
        else if(flag==0)
        {
            cnt+=str.length();
        }


    }

    
        return cnt;
        
    }
};