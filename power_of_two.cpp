/*Given an integer n, return true if it is a power of two. Otherwise, return false.

An integer n is a power of two, if there exists an integer x such that n == 2x.*/

class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        if(n%2!=0 && n!=1)
        {
            return false;
        }
        for(int i=0;i<100;i++)
        {
            if(pow(2,i)==n)
            {
                return true;
            }
        }
        return false;
        
        
        
    }
};