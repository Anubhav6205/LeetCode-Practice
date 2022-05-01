/*Given an array, rotate the array to the right by k steps, where k is non-negative.*/
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
            queue<int>q;

    int i;
    for(i=nums.size()-1; i>=0;i--)
    {
        q.push(nums[i]);

    }
    while(k--)
    {
        int r=q.front();
        cout<<r<<endl;
        q.pop();
        q.push(r);

    }
    i=0;

    while(q.size()!=0)
    {
        int r=q.front();
        nums[i]=r;
        q.pop();
        i++;

    }
        reverse(nums.begin(),nums.end());
        
        
    }
};