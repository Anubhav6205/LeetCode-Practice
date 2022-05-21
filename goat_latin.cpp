/*You are given a string sentence that consist of words separated by spaces. Each word consists of lowercase and uppercase letters only.

We would like to convert the sentence to "Goat Latin" (a made-up language similar to Pig Latin.) The rules of Goat Latin are as follows:

If a word begins with a vowel ('a', 'e', 'i', 'o', or 'u'), append "ma" to the end of the word.
For example, the word "apple" becomes "applema".
If a word begins with a consonant (i.e., not a vowel), remove the first letter and append it to the end, then add "ma".
For example, the word "goat" becomes "oatgma".
Add one letter 'a' to the end of each word per its word index in the sentence, starting with 1.
For example, the first word gets "a" added to the end, the second word gets "aa" added to the end, and so on.
Return the final sentence representing the conversion from sentence to Goat Latin.*/
class Solution {
public:
    string toGoatLatin(string sentence) {
            sentence+=' ';
    vector<string>x;
    string str;
    int i;
    for(i=0;i<sentence.length();i++)
    {
        if(sentence[i]==' ')
        {
            x.push_back(str);
            str.clear();
        }
        else
        {
            str+=sentence[i];
        }

    }
    str="maa";
    for(i=0;i<x.size();i++)
    {
        if(x[i][0]=='a'||x[i][0]=='A'||x[i][0]=='e'||x[i][0]=='E'||x[i][0]=='i'||x[i][0]=='I'||x[i][0]=='o'||x[i][0]=='O'||x[i][0]=='u'||x[i][0]=='U')
        {
            x[i]+=str;
            str+='a';

        }
        else
        {
            char first=x[i][0];
            x[i].erase(0,1);
            x[i]+=first;
            x[i]+=str;
            str+='a';

        }
    }

    str.clear();
    for(string s:x)
    {
        str+=s;
        str+=' ';
    }
    cout<<str;
        str.erase(str.length()-1);
        return str;
        
    }
};