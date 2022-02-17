/*The letter value of a letter is its position in the alphabet starting from 0 (i.e. 'a' -> 0, 'b' -> 1, 'c' -> 2, etc.).

The numerical value of some string of lowercase English letters s is the concatenation of the letter values of each letter in s, which is then converted into an integer.

For example, if s = "acb", we concatenate each letter's letter value, resulting in "021". After converting it, we get 21.
You are given three strings firstWord, secondWord, and targetWord, each consisting of lowercase English letters 'a' through 'j' inclusive.

Return true if the summation of the numerical values of firstWord and secondWord equals the numerical value of targetWord, or false otherwise.

 */
class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
    int i;
    int first=0,second=0,sum,final=0;
    for(i=0;i<firstWord.length();i++)
    {
        int x=firstWord[i]-97;
        first=first*10+x;

       
    }
    for(i=0;i<secondWord.length();i++)
    {
        int x=secondWord[i]-97;
        second=second*10+x;

       
    }
    for(i=0;i<targetWord.length();i++)
    {
        int x=targetWord[i]-97;
        final=final*10+x;

       
    }
    cout<<first<<" "<<second<<" "<<final<<endl;


        if(first+second==final)
        {
            return true;
        }
        return false;
        
    }
};