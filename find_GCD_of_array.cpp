/*class Solution {
public:
    int findGCD(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int smallest=nums[0];
    int gcd;
    int i;
    int largest=nums[nums.size()-1];
    for(i=1;i<=smallest&&i<=largest;i++)
    {
        if(smallest%i==0 && largest%i==0)
        {
            gcd=i;
        }
    }
    return gcd;
        
    }
};*/

class Solution {
public:
    int findGCD(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int smallest=nums[0];
    int gcd;
    int i;
    int largest=nums[nums.size()-1];
    for(i=1;i<=smallest&&i<=largest;i++)
    {
        if(smallest%i==0 && largest%i==0)
        {
            gcd=i;
        }
    }
    return gcd;
        
    }
};//completed