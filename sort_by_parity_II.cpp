/*Given an array of integers nums, half of the integers in nums are odd, and the other half are even.

Sort the array so that whenever nums[i] is odd, i is odd, and whenever nums[i] is even, i is even.

Return any answer array that satisfies this condition.*/

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
    vector<int>t1;
    vector<int>t2;
    vector<int>f;
    int i;
    int j=0;
    int k=0;
    for(i=0;i<nums.size();i++)
    {
        if(nums[i]%2==0)
        {
            t1.push_back(nums[i]);
        }
        else
        {
            t2.push_back(nums[i]);
        }
    }
    for(i=0;i<t1.size()*2;i++)
    {
        if(i%2==0)
        {
            f.push_back(t1[j]);
            j++;

        }
        else if (i%2!=0)
        {
            f.push_back(t2[k]);
            k++;
            
        }
    }
        return f;
        
    }
};//completed