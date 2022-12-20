/*You are given a non-negative integer array nums. In one operation, you must:

Choose a positive integer x such that x is less than or equal to the smallest non-zero element in nums.
Subtract x from every positive element in nums.
Return the minimum number of operations to make every element in nums equal to 0.

 */
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
    priority_queue<int, vector<int>, greater<int> >q;
   
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]!=0)
        {
            q.push(nums[i]);
        }

    }
    int cnt=0;
    while(!q.empty())
    {

        int top=q.top();
        int size=q.size();
        vector<int>q2;
      
        while(size-- !=0)
        {
        
            int popped=q.top();
       
            q.pop();
            if((popped-top)!=0)
            {
                q2.push_back(popped-top);
                
            }
        }
        cnt++;
        for(int j=0;j<q2.size();j++)
        {
            q.push(q2[j]);
        
        }

    }

        return cnt;        
    }
};