#include <vector>
using namespace std;
class Solution
{
public:
    bool isHappy(int n)
    {
        int dig = 0;
        while (dig != 1)
        {
            dig = 0;
            while (n > 0)
            {
                dig += (n % 10) * (n % 10);
                n /= 10;
            }
            n = dig;
            if (dig == 89)
                return false;
        }
        return true;
    }
};
