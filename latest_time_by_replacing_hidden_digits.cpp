/*You are given a string time in the form of hh:mm, where some of the digits in the string are hidden (represented by ?).

The valid times are those inclusively between 00:00 and 23:59.

Return the latest valid time you can get from time by replacing the hidden digits.*/
class Solution {
public:
    string maximumTime(string time) {
       
        if (time[0] == '?' || time[0] == '2')
        {
        if (time[1] == '?')
        {
            time[1] = '3';
        }
        if (time[0] == '?' && time[1]<'4')
        {
            time[0] = '2';
        }
        else if(time[0] == '?' && time[1]>='4')
        {
            time[0]='1';
        }
      
        
    }
    if(time[0]=='1'&&time[1]=='?')
    {
        time[1]='9';
    }
    if(time[0]=='0' && time[1]=='?')
    {
        time[1]='9';
    }

    if(time[3]=='?')
    {
        time[3]='5';
    }
    if(time[4]=='?')
    {
        time[4]='9';
    }
        return time;
    }
};