/*You are given a sorted unique integer array nums.

A range [a,b] is the set of all integers from a to b (inclusive).

Return the smallest sorted list of ranges that cover all the numbers in the array exactly. That is, each element of nums is covered by exactly one of the ranges, and there is no integer x such that x is in one of the ranges but not in nums.

Each range [a,b] in the list should be output as:

"a->b" if a != b
"a" if a == b*/
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        
    vector<string> ranges;
 
    for (int i = 0; i < nums.size(); i++)
    {
        string x;
        int save = nums[i];
    
        while (i+1 < nums.size() && nums[i]+1==nums[i+1])
        {
            i++;
          
        }
      
        if (save == nums[i])
        {
            x = to_string(save);
            ranges.push_back(x);
        }
        else
        {
            x = to_string(save) + "->" + to_string(nums[i]);
            ranges.push_back(x);
        }
        cout << x << endl;
    }
    return ranges;
    }
};