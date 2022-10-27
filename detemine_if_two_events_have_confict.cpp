/*You are given two arrays of strings that represent two inclusive events that happened on the same day, event1 and event2, where:

event1 = [startTime1, endTime1] and
event2 = [startTime2, endTime2].
Event times are valid 24 hours format in the form of HH:MM.

A conflict happens when two events have some non-empty intersection (i.e., some moment is common to both events).

Return true if there is a conflict between two events. Otherwise, return false.

 */
class Solution {
public:
    int conv(string s)
{
    int num=0;
    for(int i=0;i<5;i++)
    {
        if(s[i]!=':')
        {
            num = num*10 + (s[i]-'0');
        }
    }
    return num;
}
    bool haveConflict(vector<string>& event1, vector<string>& event2) {
         int e1start=conv(event1[0]);
    int e1end=conv(event1[1]);
    int e2start=conv(event2[0]);
    int e2end=conv(event2[1]);
       
    if((e2start>=e1start && e2start<=e1end)||(e2end>=e1start && e2end<=e1end)) 
    {
        return true;
    }
     if((e1start>=e2start && e1start<=e2end)||(e1end>=e2start && e1end<=e2end)) 
    {
        return true;
    }
    return false;
        
        
    }
};