class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
            int i=0;
    int flag=0;
    int size=nums.size();
    if(size==1)
    {
        return false;
    }
    cout<<"size is "<<size;
    sort(nums.begin(),nums.end());
    while(i<nums.size())
    {
        
        if(i==0 && nums[i]==nums[i+1])
        {
            return true;

        }

        else if(i==nums.size()-1 && nums[i]==nums[i-1])
        {
            return true;
        }
        else
        {
            if(i!=0 && i!=size-1 && nums[i]==nums[i+1] && nums[i]==nums[i-1])
            {
                cout<<"i and val is "<<i<<" "<<nums[i];
                return true;
        

            }
             
        }
        i++;
       

       
    }
        return false;
        
        
        
    }
};//completed