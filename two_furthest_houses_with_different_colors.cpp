/*There are n houses evenly lined up on the street, and each house is beautifully painted. You are given a 0-indexed integer array colors of length n, where colors[i] represents the color of the ith house.

Return the maximum distance between two houses with different colors.

The distance between the ith and jth houses is abs(i - j), where abs(x) is the absolute value of x.*/
class Solution {
public:
    int maxDistance(vector<int>& colors) {
            int i,j;
    int dist=0,maxdist=0;
    for(i=0;i<colors.size();i++)
    {
        for(j=i+1;j<colors.size();j++)
        {
            if(colors[i]!=colors[j] && abs(i-j)>dist)
            {
                dist=abs(i-j);
                if(maxdist<dist)
                {
                    maxdist=dist;
                }
            }
        }
    }
    return maxdist;
        
    }
};