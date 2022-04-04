/*You are given a string title consisting of one or more words separated by a single space, where each word consists of English letters. Capitalize the string by changing the capitalization of each word such that:

If the length of the word is 1 or 2 letters, change all letters to lowercase.
Otherwise, change the first letter to uppercase and the remaining letters to lowercase.
Return the capitalized title.*/
class Solution {
public:
    string capitalizeTitle(string title) {
            string word="";
    string str="";

    int i = 0,space=1;
    for(i=0;i<title.length();i++)
    {
        if(title[i]!=' ')
        {
        word+=tolower(title[i]);
        }
        if(title[i]==' ')
        {
            if(word.length()>2)
            {
            word[0]=toupper(word[0]);
            }
            str+=word;
            str+=' ';

            word.clear();
        }
    }
     if(word.length()>2)
            {
            word[0]=toupper(word[0]);
            }
            str+=word;
    cout<<str;
        return str;
        
        
    }
};