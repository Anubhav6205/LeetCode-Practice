/*Given an array of string words. Return all strings in words which is substring of another word in any order. 

String words[i] is substring of words[j], if can be obtained removing some characters to left and/or right side of words[j].*/
class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
           vector<string>x;
    
    int i,j;
    string str1,str2;
    for(i=0;i<words.size();i++)
    {
        for(j=0;j<words.size();j++)
        {
            str1=words[i];
            str2=words[j];

            if(str2.find(str1)!=-1 && str1!=str2)
            {
                   cout<<"Done"<<endl;

                x.push_back(str1);
                break;
            }
       
            
        }
    }
        return x;
        
    }
};