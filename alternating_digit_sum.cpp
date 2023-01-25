/*You are given a positive integer n. Each digit of n has a sign according to the following rules:

The most significant digit is assigned a positive sign.
Each other digit has an opposite sign to its adjacent digits.
Return the sum of all digits with their corresponding sign*/
class Solution {
public:
    int alternateDigitSum(int n) {
         int mul=1;
    int sum=0;
    while(n>0)
    {
        mul*=-1;
        sum=sum+(mul*n%10);
        n/=10;
    }
    sum*= (mul);
    return sum;
        
    }
};