/*Hercy wants to save money for his first car. He puts money in the Leetcode bank every day.

He starts by putting in $1 on Monday, the first day. Every day from Tuesday to Sunday, he will put in $1 more than the day before. On every subsequent Monday, he will put in $1 more than the previous Monday.
Given n, return the total amount of money he will have in the Leetcode bank at the end of the nth day./

class Solution {
public:
    int totalMoney(int n) {
    int i,sum=0,save=1;
    int count=0,add=1;
    for(i=0;i<n;i++)
    {
        count++;
        sum+=add;
        add++;
        if(count==7)
        {
            add=save+1;
            count=0;
            save++;

        }

    }
        return sum;
        
    }
};