/*Share
Given an integer n, return any array containing n unique integers such that they add up to 0.*/

class Solution {
public:
    vector<int> sumZero(int n) {
    int i;
    vector<int>nums;
    if(n%2!=0)
    {
        for(i=-n/2;i<=n/2;i++)
        {
            nums.push_back(i);
        }

    }
    else if(n%2==0)
    {
        for(i=-n/2;i<=n/2;i++)
        {
            if(i!=0)
            {
                nums.push_back(i);
            }
        }
    }
        return nums;
        
    }
};//completed