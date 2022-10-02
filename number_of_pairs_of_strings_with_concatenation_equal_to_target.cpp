/*Given an array of digit strings nums and a digit string target, return the number of pairs of indices (i, j) (where i != j) such that the concatenation of nums[i] + nums[j] equals target.*/
class Solution {
public:
    
  
    int numOfPairs(vector<string>& nums, string target) {
        
          unordered_map<string, int> mp;
    int i;
    for (i=0; i < nums.size(); i++)
    {
        mp[nums[i]] ++;
    }
    int cnt = 0;
        
     for (i=0; i < nums.size(); i++)
     {
         string prefix=nums[i];
          if (target.find(prefix) == 0)
        {
            string suffix = target.substr(prefix.length(), target.length() - prefix.length());
             if(mp[suffix]>0)
             {
                  cnt += (prefix == suffix ? mp[suffix]-1 : mp[suffix]);
             }
            
        }
     }
   
   
        return cnt;
        
    }
};