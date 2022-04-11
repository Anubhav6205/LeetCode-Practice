/*You have a long flowerbed in which some of the plots are planted, and some are not. However, flowers cannot be planted in adjacent plots.

Given an integer array flowerbed containing 0's and 1's, where 0 means empty and 1 means not empty, and an integer n, return if n new flowers can be planted in the flowerbed without violating the no-adjacent-flowers rule.*/
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
            int cnt=0;
    if(flowerbed.size()==1 && flowerbed[0]==0)
    {
        cnt++;
    }
    else 
    {
        if(flowerbed[0]==0 && flowerbed[1]==0)
        {
            flowerbed[0]=1;
            cnt++;
        }
        if(flowerbed[flowerbed.size()-1]==0 && flowerbed[flowerbed.size()-2]==0)
        {
              flowerbed[flowerbed.size()-1]=1;
            cnt++;
        }
        for(int i=1;i<flowerbed.size()-1;i++)
        {
            if(flowerbed[i-1]==0 &&flowerbed[i]==0 &&flowerbed[i+1]==0 )
            {
                flowerbed[i]=1;
                cnt++;
             
            }
        }
        

    }
    if(cnt>=n)
    {
        return true;
    }
        return false;
        
    }
};