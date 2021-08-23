/*Given an integer array arr, return true if there are three consecutive odd numbers in the array. Otherwise, return false.
 */

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
    int count=0;
    int i;
    for(i=0;i<arr.size();i++)
    {
        if(arr[i]%2!=0)
        {
          
            count=count+1;
           
            if(count==3)
            {
                return true;
            }

        }
        else
        {
            count=0;
        }

    }
    return false;
        
    }
};