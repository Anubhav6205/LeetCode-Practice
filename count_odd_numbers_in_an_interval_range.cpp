/*Given two non-negative integers low and high. Return the count of odd numbers between low and high (inclusive).*/
class Solution {
public:
    int countOdds(int low, int high) {
            int i,cnt=0,check;
      
        if(low %2==0)
        {
            check=0;
        }
        else
        {
            check=1;
        }
        if(check==0)
        {
            for(i=low+1;i<=high;i+=2)
        {
        
            cnt++;
        }
        }
        else 
        {
        for(i=low;i<=high;i+=2)
        {
        
            cnt++;
                
        }
        }

        return cnt;
        
    }
};