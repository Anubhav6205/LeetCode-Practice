/*You are given an alphanumeric string s. (Alphanumeric string is a string consisting of lowercase English letters and digits).

You have to find a permutation of the string where no letter is followed by another letter and no digit is followed by another digit. That is, no two adjacent characters have the same type.

Return the reformatted string or return an empty string if it is impossible to reformat the string.*/

class Solution {
public:
    string reformat(string s) {
           string alpha = "", num = "";
    string str = "";
    int cnt = 0;
    int i;
    for (i = 0; i < s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            num += s[i];
        }
        else
        {
            alpha += s[i];
        }
    }
    int alphalen = alpha.length();
    int numlen = num.length();
    if (abs(numlen - alphalen) > 1 || abs(numlen - alphalen) < -1)
    {
        return "";
    }

    for (i = 0; i < min(alpha.length(), num.length()); i++)
    {
        str += alpha[i];
        str += num[i];
    }

    if (alpha.length() > num.length())
    {
        str += alpha[alpha.length() - 1];
    }
    else if (alpha.length() < num.length())
    {
        str = num[num.length() - 1]+str;
    }


        return str;
        
    }
};