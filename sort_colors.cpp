/*Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.*/
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z=0,o=0,t=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                z++;
            }
            else if(nums[i]==1)
            {
                o++;
            }
            else
            {
                t++;
            }
        }
        int i=0;
        while(z>0)
        {
            nums[i]=0;
            i++;
            z--;
        }
           while(o>0)
        {
            nums[i]=1;
            i++;
               o--;
        }
           while(t>0)
        {
            nums[i]=2;
            i++;
               t--;
        }
        
        
    }
};