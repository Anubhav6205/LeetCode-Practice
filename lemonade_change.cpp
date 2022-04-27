/*At a lemonade stand, each lemonade costs $5. Customers are standing in a queue to buy from you and order one at a time (in the order specified by bills). Each customer will only buy one lemonade and pay with either a $5, $10, or $20 bill. You must provide the correct change to each customer so that the net transaction is that the customer pays $5.

Note that you do not have any change in hand at first.

Given an integer array bills where bills[i] is the bill the ith customer pays, return true if you can provide every customer with the correct change, or false otherwise.*/
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
          int five=0,ten=0,fif=0;
    int i;
    for(i=0;i<bills.size();i++)
    {

        if(bills[i]==5)
        {
            five++;
        }
        else if(bills[i]==10)
        {
            ten++;
              
            if(five==0)
            {
             
                return false;
            }
            else
            {
                five--;
            }

        }
        else if(bills[i]==20)
        {
            fif++;
             
            if(ten>0 && five>0  )
            {
                ten--;
                five--;
                
        
            }
            else if(five>2)
            {
                five-=3;
            }
       
            else 
            {
            
                return false;
            }

        }
    }
    return true;
        
    }
};