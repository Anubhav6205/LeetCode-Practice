/*A sentence is a list of words that are separated by a single space with no leading or trailing spaces. Each word consists of lowercase and uppercase English letters.

A sentence can be shuffled by appending the 1-indexed word position to each word then rearranging the words in the sentence.

For example, the sentence "This is a sentence" can be shuffled as "sentence4 a3 is2 This1" or "is2 sentence4 This1 a3".
Given a shuffled sentence s containing no more than 9 words, reconstruct and return the original sentence.*/
class Solution {
public:
    string sortSentence(string s) {
         s+=" ";
    string word="";
    map<int,string>mp;
    int i;
    vector<string>words;
    vector<int>pos;
    for(i=0;i<s.length();i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            words.push_back(word);
            word.clear();
            pos.push_back(s[i]-'0');
        }
        else if(s[i]!=' ')
        {
            word+=s[i];
        }
    }
    for(i=0;i<words.size();i++)
    {
 
        mp[pos[i]]=words[i];
    }
    word.clear();
    for(auto it:mp)
    {
       
        word+=it.second;
        word+=' ';
    }
           word.resize(word.size() - 1);
       
    
        return word;
        
    }
};