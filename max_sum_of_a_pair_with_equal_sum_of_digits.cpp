/*You are given a 0-indexed array nums consisting of positive integers. You can choose two indices i and j, such that i != j, and the sum of digits of the number nums[i] is equal to that of nums[j].

Return the maximum value of nums[i] + nums[j] that you can obtain over all possible indices i and j that satisfy the conditions.*/
class Solution {
public:
    int maximumSum(vector<int>& nums) {
          unordered_map<int, priority_queue<int>> mp;

    int mx=0;
    int check=0;
    int i;
    for (i = 0; i < nums.size(); i++)
    {
        int sum = 0;
        int n = nums[i];
        while (n > 0)
        {
            int last = n % 10;
            sum += last;
            n /= 10;
        }
        mp[sum].push(nums[i]);
    }

    cout << "pushed\n";
    for (auto i : mp)
    {
        cout << "\nfor " << i.first << endl;
        int cnt=0;
        int k=2;
        if(i.second.size()>=2)
        {
        while (i.second.size() > 0 && k--)
        {
            cnt+=i.second.top();
            i.second.pop();
        }
        }
        else 
        {
            check++;
        }
        
        mx=max(mx,cnt);
    }
        if(check==nums.size())
        {
            return -1;
        }
        return mx;
    cout<<"check="<<check<<endl;
        cout<<"max = "<<mx<<endl;
        
    }
};