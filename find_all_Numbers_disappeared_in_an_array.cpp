/*Given an array nums of n integers where nums[i] is in the range [1, n], return an array of all the integers in the range [1, n] that do not appear in nums.*/

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
    int size=nums.size();       
    sort(nums.begin(),nums.end());
    nums.erase(unique(nums.begin(),nums.end()),nums.end());
    int last=nums[size-1];
    int i;
    int k=0;
    vector<int>diss;
    int count=0;
    for(i=1;i<=size;i++)
    {
        if(i!=nums[k])
        {
            diss.push_back(i);
            count--;
            
        }
        else if(i==nums[k])
        {
            k++;
            count++;
        }
        if(count==size)
        {
            vector<int>q{};
            return q;
        }



    }
    return diss;
    
        
    }
};//completed