/*Given a string of English letters s, return the greatest English letter which occurs as both a lowercase and uppercase letter in s. The returned letter should be in uppercase. If no such letter exists, return an empty string.

An English letter b is greater than another letter a if b appears after a in the English alphabet.*/
class Solution {
public:
    string greatestLetter(string s) {
        
            map<char,int>lower,upper;
    char mx='@';
    for(char c:s)
    {
        if(islower(c))
        {
            lower[c]++;
        }
        else
        {
            upper[c]++;
        }
    }

    for(auto it:upper)
    {
        char x=it.first;
        if(lower.find(x+32)!=lower.end())
        {
            mx=x;
            

        }

    
    }
        string fuck="";
        if(mx=='@')
        {
            return fuck;
        }
        fuck+=mx;
        return fuck;
        
    }
};