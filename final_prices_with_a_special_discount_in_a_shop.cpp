/*Given the array prices where prices[i] is the price of the ith item in a shop. There is a special discount for items in the shop, if you buy the ith item, then you will receive a discount equivalent to prices[j] where j is the minimum index such that j > i and prices[j] <= prices[i], otherwise, you will not receive any discount at all.

Return an array where the ith element is the final price you will pay for the ith item of the shop considering the special discount.

 */
class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
            int i,size=prices.size(),j;
    int less = 0;
    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(prices[j]<=prices[i])
            {
                prices[i]-=prices[j];
                goto label;
            }
        }
        label:
        cout<<"here"<<endl;
    }
    for(i=0;i<prices.size();i++)
    {
        cout<<" "<<prices[i];
    }
        return prices;   
    }
};