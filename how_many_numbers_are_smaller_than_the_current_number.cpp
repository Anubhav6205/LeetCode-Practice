class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
            vector<int>fi;
    int i,j;
    int size=nums.size();
    int count=0;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(nums[i]>nums[j] && i!=j)
            {
                count++;
            }


        }
        fi.push_back(count);
        count=0;
    }
        return fi;
        
    }
};//completed