/*Given an array of integers arr, return true if we can partition the array into three non-empty parts with equal sums.

Formally, we can partition the array if we can find indexes i + 1 < j with (arr[0] + arr[1] + ... + arr[i] == arr[i + 1] + arr[i + 2] + ... + arr[j - 1] == arr[j] + arr[j + 1] + ... + arr[arr.length - 1])*/
class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum=accumulate(arr.begin(),arr.end(),0);
        if(sum%3!=0)
        {
            return false;
        }
        int half=sum/3;
        int cnt=0;
        int i,part=0;
        for(i=0;i<arr.size();i++)
        {
            part+=arr[i];
            if(part==half)
            {
                part=0;
                cnt++;
            }
        }
        
        if(cnt>=3)
        {
            return true;
        }
        return false;
        
    }
};