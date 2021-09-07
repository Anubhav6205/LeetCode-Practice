/*Given two strings s and goal, return true if you can swap two letters in s so the result is equal to goal, otherwise, return false.

Swapping letters is defined as taking two indices i and j (0-indexed) such that i != j and swapping the characters at s[i] and s[j].

For example, swapping at indices 0 and 2 in "abcd" results in "cbad".
 */

class Solution {
public:
    bool buddyStrings(string s, string goal) {
        
            string s1=s;
    int flag=0;
    string goal1=goal;
    sort(s1.begin(),s1.end());
    sort(goal1.begin(),goal1.end());
    if(s1.length()!=goal1.length())
    {
        return false;
    }
    int count=0;
    int i;
    for(i=0;i<s.size();i++)
    {
        if(goal[i]!=s[i])
        {
            count++;
        }
    }
    if(count==2)
    {
        flag++;
    }
    if(count>2)
    {
        return false;
    }
    if(s1==goal1)
    {
        flag++;
    }
    if(flag==2)
    {
        return true;
    }
    string scopy=s1;
    scopy.erase(unique(scopy.begin(),scopy.end()),scopy.end());
    if(scopy.length()<s1.length() && s1==goal1)
    {
        return true;

    }
    return false;
        
    }
};//completed