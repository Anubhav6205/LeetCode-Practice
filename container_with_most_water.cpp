
/*You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.*/
class Solution {
public:
    int maxArea(vector<int>& height) {
           int f = 0, l = height.size() - 1;
    int mx = 0;
    while (f < l)
    {
    
        mx = max(mx, (l - f) * min(height[l], height[f]));
        if(height[f]<height[l])// if h l is greater than h f , we increment 
        { 
        f++;
        }
        else
        {
        l--;
        }
     
    }

        return mx;
        
    }
};