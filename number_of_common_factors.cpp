/*Given two positive integers a and b, return the number of common factors of a and b.

An integer x is a common factor of a and b if x divides both a and b.*/
class Solution {
public:
    void cntcommon(int &cnt,int a,int b,int &fact)
{
    if(fact<=a && fact<=b)
    {
        if(a%fact==0 && b%fact==0)
        {
            cout<<"fact "<<fact<<endl;
         
            cnt++;
            

        }
        fact++;
        cntcommon(cnt,a,b,fact);



    }
    return;


}
    int commonFactors(int a, int b) {
          int cnt=0;
    int fact=1;
    cntcommon(cnt,a,b,fact);
        return cnt;
    }
};