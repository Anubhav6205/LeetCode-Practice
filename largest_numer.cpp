class Solution {
public:
    
    static bool comparefunction(int a,int b)
{
    string s1=to_string(a);
    string s2=to_string(b);
    return s1+s2>s2+s1;
}
    string largestNumber(vector<int>& nums) {
         string ans="";
        bool onlyzero=true;
    sort(nums.begin(), nums.end(),comparefunction);
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]!=0)
        {
            onlyzero=false;
        }
        string s=to_string(nums[i]);
        ans+=s;
    }
        if(onlyzero)
        {
            return "0";
        }
        
        return ans;

        
    }
};