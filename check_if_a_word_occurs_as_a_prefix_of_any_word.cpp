/*Given a sentence that consists of some words separated by a single space, and a searchWord, check if searchWord is a prefix of any word in sentence.

Return the index of the word in sentence (1-indexed) where searchWord is a prefix of this word. If searchWord is a prefix of more than one word, return the index of the first word (minimum index). If there is no such word return -1.

A prefix of a string s is any leading contiguous substring of s.*/
class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
           int i=0;
    sentence+=" ";
    vector<string>x;
    string str="";
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
    for(i=0;i<x.size();i++)
    {
        if(x[i].find(searchWord)==0)
        {
            return i+1;
        }
    }
    return -1;
    }
};