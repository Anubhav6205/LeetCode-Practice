/*Let's call an array arr a mountain if the following properties hold:

arr.length >= 3
There exists some i with 0 < i < arr.length - 1 such that:
arr[0] < arr[1] < ... arr[i-1] < arr[i]
arr[i] > arr[i+1] > ... > arr[arr.length - 1]
Given an integer array arr that is guaranteed to be a mountain, return any i such that arr[0] < arr[1] < ... arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1].*/
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
            int i,max=-69,x=-6969;
    int index=0;
    int inmax=0;
        
    for(i=1;i<arr.size()-1;i++)
    {
        if(arr[i]> arr[i-1] && arr[i]>arr[i+1])
        {
            x=arr[i];
            index=i;
            if(x>max)
            {
                max=x;
                inmax=index;
            }
        }
    }
    cout<<"Index "<<index<<endl;
    cout<<"Inmax "<<inmax<<endl;
        return inmax;
        
    }
};