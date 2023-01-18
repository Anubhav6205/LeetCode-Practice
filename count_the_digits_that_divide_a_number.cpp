/*Given an integer num, return the number of digits in num that divide num.

An integer val divides nums if nums % val == 0.*/
class Solution {
public:
    int countDigits(int num) {
        int n=num;
        int cnt=0;
        while(num>0)
        {
            int last=num%10;
            num=num/10;
            if(n%last==0)
            {
                cnt++;
            }
            
        }
        return cnt;
        
    }
};