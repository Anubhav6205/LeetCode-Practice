class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        unordered_map<string,int>mp;
    
        for(int i=0;i<grid.size();i++)
        {
            string s="";
            for(int j=0;j<grid[0].size();j++)
            {
                s+=to_string(grid[i][j]);
                s+="$";
                
            }
            mp[s]++;
            
        }
        int cnt=0;
          for(int i=0;i<grid.size();i++)
        {
            string s="";
            for(int j=0;j<grid[0].size();j++)
            {
                s+=to_string(grid[j][i]);
                s+="$";
                
            }
             if(mp[s]>0)
             {
                 cnt+=mp[s];
             }
         
            
        }
        return cnt;
        
        
    }
};