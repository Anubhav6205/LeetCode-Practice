/*Given an array arr of positive integers sorted in a strictly increasing order, and an integer k.

Find the kth positive integer that is missing from this array.*/
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
           vector<long long>x(3000,0);
    int i=0;
    for(i=0;i<arr.size();i++)
    {
        x[arr[i]]=1;
    }
    long long cnt=0,save=0;
    i=1;
    while(cnt!=k)
    {
        if(x[i]==0)
        {
            cnt++;
            save=i;
   
        }
        i++;
  

    }
   
        return save;
        
    }
};