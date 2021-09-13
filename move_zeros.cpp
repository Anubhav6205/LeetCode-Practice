class Solution {
public:
    void moveZeroes(vector<int>& nums) {
int size1=nums.size();
nums.erase(remove(nums.begin(), nums.end(), 0), nums.end());
int size2=nums.size();
int diff=size1-size2;
while(diff--)
{
    nums.push_back(0);
}
        
    }
};//completed