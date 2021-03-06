/*Given two integer arrays startTime and endTime and given an integer queryTime.

The ith student started doing their homework at the time startTime[i] and finished it at time endTime[i].

Return the number of students doing their homework at time queryTime. More formally, return the number of students where queryTime lays in the interval [startTime[i], endTime[i]] inclusive.*/
class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        
        int i;
        int cnt=0;
        for(i=0;i<startTime.size();i++)
        {
            if(queryTime>=startTime[i] && queryTime<=endTime[i])
            {
                cnt++;
            }
        }
        return cnt;
    }
};