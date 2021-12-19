#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int lowLimit,highLimit;
    cin>>lowLimit>>highLimit;
    int n=highLimit-lowLimit+1,i,num,maxsum=0;
    int arr[46]={0};
    for(i=lowLimit;i<=highLimit;i++)
    {
        int sum=0;
        num=i;
        while(num>0)
    
    {
     
        sum=sum+(num%10);
        num=num/10;

    }
    arr[sum]++;

    cout<<"max sum is "<<maxsum<<endl;
    maxsum=max(arr[sum],maxsum);
    }

    printf("%d max",maxsum);
    
}