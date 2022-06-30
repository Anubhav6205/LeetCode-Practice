/*You are given the array paths, where paths[i] = [cityAi, cityBi] means there exists a direct path going from cityAi to cityBi. Return the destination city, that is, the city without any path outgoing to another city.

It is guaranteed that the graph of paths forms a line without any loop, therefore, there will be exactly one destination city.*/
class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
           map<string,string>mp;
    int i,j;
    for(i=0;i<paths.size();i++)
    {
        
            mp[paths[i][0]]=paths[i][1];
        
    }

     for(i=0;i<paths.size();i++)
    {
        if(mp.find(paths[i][1])==mp.end())
        {
            return paths[i][1];
        }
    }
       return "";
        
    }
};