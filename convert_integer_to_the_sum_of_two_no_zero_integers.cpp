/*No-Zero integer is a positive integer that does not contain any 0 in its decimal representation.

Given an integer n, return a list of two integers [A, B] where:

A and B are No-Zero integers.
A + B = n
The test cases are generated so that there is at least one valid solution. If there are many valid solutions you can return any of them.*/
class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
    vector<int>x;
    int i,a,b,flag=0,xx,y,last;
    for(i=1;i<n;i++)
    {
        a=i;
        xx=a;
        b=n-i;
        y=b;
        flag=0;
        while(xx>0)
        {
            last=xx%10;
            if(last==0)
            {
                flag=1;   
            }
            xx/=10;
        }
        while(y>0)
        {
            last=y%10;
            if(last==0)
            {
                flag=1;   
            }
            y/=10;
        }
        if(flag==0)
        {
            x.push_back(a);
            x.push_back(b);
            goto label;
        }
        else if(flag==1)
        {
            continue;
        }
        

    }
    label:
        return x;
        
        
    }
};