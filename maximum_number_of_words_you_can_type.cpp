/*There is a malfunctioning keyboard where some letter keys do not work. All other keys on the keyboard work properly.

Given a string text of words separated by a single space (no leading or trailing spaces) and a string brokenLetters of all distinct letter keys that are broken, return the number of words in text you can fully type using this keyboard.*/
class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
            vector<string> words;
    string str = "";
    text += ' ';
    int i,cnt=0;
    int wordcount=0;
    for (i = 0; i < text.length(); i++)
    {

        while (text[i] != ' ')
        {
            str += text[i];
            i++;
        }
        words.push_back(str);
        str.clear();
    }
    for(i=0;i<words.size();i++)
    {
        str=words[i];
        for(int j=0;j<brokenLetters.length();j++)
        {
            if(str.find(brokenLetters[j])<100)
            {
                break;
            }
            else 
            {
                cnt++;
            }
        }
        if(cnt==brokenLetters.length())
        {
            wordcount++;
        }
        cnt=0;


    }
    cout<<wordcount;
        return wordcount;
        
    }
};