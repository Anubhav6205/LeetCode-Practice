/*You are given an integer n.

Each number from 1 to n is grouped according to the sum of its digits.

Return the number of groups that have the largest size.*/
class Solution {
public:
    int digitSum(int n)
{

    int sum = 0;
    while (n != 0)
    {
        sum += n % 10;
        n = n / 10;
    }

    return sum;
}
    
    int countLargestGroup(int n) {
    unordered_map<int, int> mp;
    int i;
    int mx = INT_MIN;
    for (i = 1; i <= n; i++)
    {
        mp[digitSum(i)]++;
        mx = max(mp[digitSum(i)], mx);
    }
    int cnt = 0;
    for (auto it : mp)
    {
        if (it.second == mx)

        {
            cnt++;
        }
    }
    cout << cnt << endl;
        return cnt;
        
    }
};