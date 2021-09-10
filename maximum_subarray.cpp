class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
    int sum=0;
    int max=nums[0];
        int biggest=nums[0];
        if(nums.size()==1)
        {
            return nums[0];
        }
        int i;
    for(i=0;i<nums.size();i++)
    {
           if(nums[i]>biggest)
        {
            biggest=nums[i];
        }
        sum+=nums[i];
        if(sum<0)
        {
            sum=0;
            cout<<"Resetted at "<<nums[i]<<endl;

        }
        else
        {
            if(max<sum)
            {
                max=sum;
            }
        }
        
        


    }
   if(biggest>max)
   {
       return biggest;
   }
        else
        {
            return max;
        }
        
    }
};//completed