/*You are given a 0-indexed integer array nums and an integer k. You have a starting score of 0.

In one operation:

choose an index i such that 0 <= i < nums.length,
increase your score by nums[i], and
replace nums[i] with ceil(nums[i] / 3).
Return the maximum possible score you can attain after applying exactly k operations.

The ceiling function ceil(val) is the least integer greater than or equal to val.

 */
class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
          priority_queue<int>q;
    for(auto it:nums)
    {
        q.push(it);
    }
    long long sum=0;
    
    while(k--)
    {
        int num=q.top();
        q.pop();
        sum+=num;
        if(num%3==0)
        {
            num=((num)/3);    
        }
        else
        {
            num=((num)/3)+1;
        }
        q.push(num);
    }
    cout<<sum<<endl;
        return sum;
        
    }
};