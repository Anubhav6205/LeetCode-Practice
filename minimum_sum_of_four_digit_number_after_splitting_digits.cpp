/*You are given a positive integer num consisting of exactly four digits. Split num into two new integers new1 and new2 by using the digits found in num. Leading zeros are allowed in new1 and new2, and all the digits found in num must be used.

For example, given num = 2932, you have the following digits: two 2's, one 9 and one 3. Some of the possible pairs [new1, new2] are [22, 93], [23, 92], [223, 9] and [2, 329].
Return the minimum possible sum of new1 and new2.*/
class Solution {
public:
    int minimumSum(int num) {
    vector<int>x;
    int last,i;
    int first=0,second=0;
    int n=num;
    while(n>0)
    {
        last=n%10;
        x.push_back(last);
        n/=10;
    }
    sort(x.begin(),x.end());
    for(i=0;i<x.size();i++)
    {
        if(i%2==0)
        {
            first=first*10+x[i];
        }
        else
        {
            second=second*10+x[i];
        }
    }
    return first+second;
        
    }
};