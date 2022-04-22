/*International Morse Code defines a standard encoding where each letter is mapped to a series of dots and dashes, as follows:

'a' maps to ".-",
'b' maps to "-...",
'c' maps to "-.-.", and so on.
For convenience, the full table for the 26 letters of the English alphabet is given below:

[".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
Given an array of strings words where each word can be written as a concatenation of the Morse code of each letter.

For example, "cab" can be written as "-.-..--...", which is the concatenation of "-.-.", ".-", and "-...". We will call such a concatenation the transformation of a word.
Return the number of different transformations among all words we have.

 */
class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
          vector<string>x;
    string str="";
         string arr[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    string it="";
    int i,j;
    for(i=0;i<words.size();i++)
    {
        it=words[i];
        for(j=0;j<it.length();j++)
        {
        
            str+=arr[it[j]-'a'];
        }
        x.push_back(str);
        str.clear();
        
    }
    
    sort(x.begin(),x.end());
    x.erase(unique(x.begin(),x.end()),x.end());

        return x.size();
        
    }
};