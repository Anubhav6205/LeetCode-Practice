/*You are given two integers, x and y, which represent your current location on a Cartesian grid: (x, y). You are also given an array points where each points[i] = [ai, bi] represents that a point exists at (ai, bi). A point is valid if it shares the same x-coordinate or the same y-coordinate as your location.

Return the index (0-indexed) of the valid point with the smallest Manhattan distance from your current location. If there are multiple, return the valid point with the smallest index. If there are no valid points, return -1.

The Manhattan distance between two points (x1, y1) and (x2, y2) is abs(x1 - x2) + abs(y1 - y2).

 */
class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
            int i,j;
            int minsum=6900350,sum=-69,minindex;
     for(i=0;i<points.size();i++)
    {         
        for(j=0;j<1;j++)
        {
            if(x==points[i][0]|| y==points[i][1])
            {
            sum=(abs(x-points[i][0])+abs(y-points[i][1]));
            if(minsum>sum)
            {
                minsum=sum;
                minindex=i;

            }
                cout<<"sum:"<<sum<<" minsum:"<<minsum<<endl;
            }
        }
    }
    if(sum==-69)
    {
        return -1;
    }
    return minindex;
        
    }
};