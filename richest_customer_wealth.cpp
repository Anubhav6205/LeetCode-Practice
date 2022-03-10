/*You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the i​​​​​​​​​​​th​​​​ customer has in the j​​​​​​​​​​​th​​​​ bank. Return the wealth that the richest customer has.

A customer's wealth is the amount of money they have in all their bank accounts. The richest customer is the customer that has the maximum wealth.

 */
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
    int i,j;
    int sum=0;
    int maxsum=0;
    for(i=0;i<accounts.size();i++)
    {
        cout<<"i:"<<i<<endl;        
        for(j=0;j<accounts[i].size();j++)
        {
            sum+=accounts[i][j];
            cout<<"sum:"<<sum<<endl;
            cout<<"j:"<<j<<endl;    
        }
       
        if(sum>maxsum)
        {
            maxsum=sum;
        }
        
        sum=0;
       
    }
    cout<<maxsum<<endl;
        return maxsum;

        
    }
};