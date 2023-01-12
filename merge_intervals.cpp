/*Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.*/
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
         vector<vector<int>> x;
    int i;
        sort(intervals.begin(),intervals.end());
    int start = intervals[0][0];
    int end = intervals[0][1];
    for (i = 1; i < intervals.size(); i++)
    {
        if (end >= intervals[i][0])
        {
            end = max(intervals[i][1],end);
        }
        else
        {
            vector<int> use;
            use.push_back(start);
            use.push_back(end);
            x.push_back(use);
            start = intervals[i][0];
            end = intervals[i][1];
        }
    }
    vector<int> use;
    use.push_back(start);
    use.push_back(end);
    x.push_back(use);
 
        return x;
        
    }
};