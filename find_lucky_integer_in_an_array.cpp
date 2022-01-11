#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr{2,2,2,3,3};
    int i,j;
    int num,max=-69;
    int count=0;
    for(i=0;i<arr.size();i++)
    {
        num=arr[i];
        for(j=0;j<arr.size();j++)
        {
            if(i!=j && arr[i]==arr[j])
            {
                cout<<"Increment . i is "<<arr[i]<<endl;
                count++;
            }
        }
        if(count==num-1)
        {
            if(max<num)
            {
                max=num;
            }
            
        }
        count=0;


    }

    cout<<"Number :"<<max;
}