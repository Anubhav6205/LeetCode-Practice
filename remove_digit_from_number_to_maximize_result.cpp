/*You are given a string number representing a positive integer and a character digit.

Return the resulting string after removing exactly one occurrence of digit from number such that the value of the resulting string in decimal form is maximized. The test cases are generated such that digit occurs at least once in number*/
class Solution {
public:
    string removeDigit(string number, char digit) {
            string maxx="";
    string str;
    int i =0;
    for(i=0;i<number.length();i++)
    {
        if(number[i]==digit)
        {
            str=number.substr(0,i)+number.substr(i+1,number.length()-1);

            if(maxx<str)
            {
                maxx=str;
            }
    
        }

    }
    return maxx;
        
    }
};