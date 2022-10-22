/*Given a non-negative integer num, return true if num can be expressed as the sum of any non-negative integer and its reverse, or false otherwise.*/
class Solution {
public:
    
int rev(int num)
{
    int n=num;
    int rev=0;
    while(n>0)
    {
        int last=n%10;
        rev=rev*10+last;
        n/=10;
    }
    return rev;


}
    bool sumOfNumberAndReverse(int num) {
         int half=num/2;
          if(num==0)
        {
            return true;
        }
    while(half<num)
    {
        if(half+rev(half)==num)
        {
            return true;
        }
        half++;
    }
    return false;
        
    }
};