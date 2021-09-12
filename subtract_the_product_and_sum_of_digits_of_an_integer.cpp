class Solution {
public:
    int subtractProductAndSum(int n) {
    int last;
    vector<int>nums;
    int num=n;
    while(num!=0)
    {
        last=num%10;
        nums.push_back(last);
        num=num/10;
    }
    int ini=1;
    int sum=accumulate(nums.begin(),nums.end(),0);
    const auto total = accumulate(nums.cbegin(), nums.cend(), 1, std::multiplies<int>{});
        return total-sum;
        
    }
};//completed