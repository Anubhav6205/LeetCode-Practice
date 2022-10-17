/*You are given a string of length 5 called time, representing the current time on a digital clock in the format "hh:mm". The earliest possible time is "00:00" and the latest possible time is "23:59".

In the string time, the digits represented by the ? symbol are unknown, and must be replaced with a digit from 0 to 9.

Return an integer answer, the number of valid clock times that can be created by replacing every ? with a digit from 0 to 9*/

class Solution {
public:
    int countTime(string time) {
         int multi = 1;
    if (time[0] == '?')
    {
        if (time[1] == '?')
        {
            multi *= 24;
        }
        else if (time[1] <= '3')
        {
            multi *= 3;
        }
        else
        {
            multi *= 2;
     
        }
    }
    if(time[1]=='?'&& time[0]!='?')
    {
        if(time[0]=='2')
        {
            multi*=4;
        }
        else
        {
            multi*=10;
        }
    }
    if(time[3]=='?')
    {
        if(time[4]=='?')
        {
            multi*=60;

        }
        else
        {
            multi*=6;
        } 
    }
    if(time[4]=='?'&& time[3]!='?')
    {
        multi*=10;
    }
    cout<<multi;
        return multi;
        
    }
};