/*Given a 0-indexed string word and a character ch, reverse the segment of word that starts at index 0 and ends at the index of the first occurrence of ch (inclusive). If the character ch does not exist in word, do nothing.

For example, if word = "abcdefd" and ch = "d", then you should reverse the segment that starts at 0 and ends at 3 (inclusive). The resulting string will be "dcbaefd".
Return the resulting string.*/
class Solution {
public:
    string reversePrefix(string word, char ch) {
            int loc=0,i;
    for(i=0;i<word.length();i++)
    {
        if(word[i]==ch)
        {
            loc=i;
            goto label;
        }
    }
    label:
    reverse(word.begin(),word.begin()+loc+1);
        return word;
        
    }
};