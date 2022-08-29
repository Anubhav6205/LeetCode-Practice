/*Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.*/
class Solution {
public:
    
    int firstoccurence(vector<int> nums, int t)
{
    int found = -1;
    int l=0,r=nums.size();
    while(l<=r )
    {
        int mid=(l +r)/2;
        if(mid==nums.size())
        {
            break;
        }
        if(nums[mid]==t)
        {
           
            found=mid;
            r=mid-1;
        }
        else if(nums[mid]<t)
        {

            l=mid+1;
        }
        else
        {
           
            r=mid-1;
        }

    }
    
    return found;

}

int secondoccurence(vector<int>nums,int t)
{
     int found = -1;
    int l=0,r=nums.size();
    while(l<=r && l != nums.size())
    {
        int mid=(l + r)/2;
        if(nums[mid]==t)
        {
         
            found=mid;
            l=mid+1;
        }
        else if(nums[mid]<t)
        {
            
            l=mid+1;
        }
        else
        {
          
            r=mid-1;
        }
       
    }

    return found;

}

    vector<int> searchRange(vector<int>& nums, int target) {
         vector<int> ans;
        if(nums.size()==0)
        {
            return {-1,-1};
        }
    int x = INT_MAX;
   ans.push_back(firstoccurence(nums, target));
    ans.push_back(secondoccurence(nums, target));
        return ans;
        
        
        
    }
};