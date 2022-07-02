/*Given a positive integer n, find and return the longest distance between any two adjacent 1's in the binary representation of n. If there are no two adjacent 1's, return 0.

Two 1's are adjacent if there are only 0's separating them (possibly no 0's). The distance between two 1's is the absolute difference between their bit positions. For example, the two 1's in "1001" have a distance of 3.*/
class Solution {
public:
    string tobinary(int n)
{
    string str = "";
    while (n)
    {
        str = to_string(n % 2) + str;
        n /= 2;
    }
    return str;
}
    
    int binaryGap(int n) {
    string str = tobinary(n);
    cout << str << endl;
    int mx = 0;
    bool found = false;
    int i, j;
    int cnt = 1;
    for (i = 0; i < str.length() - 1; i++)
    {
          cnt = 1;
        if (str[i] == '1')
        {
            for (j = i + 1; j < str.length() ; j++)
            {
               
                if (str[j] == '1')
                {
               
                     mx = max(mx, cnt);
                    found = true;
                    break;
                }
          
                cnt++;
            }
           
          
          
        }
    }
        if(found==false)
        {
            return 0;
        }
        return mx;
        
    }
};