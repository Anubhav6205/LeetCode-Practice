/*Share
Given an array arr of integers, check if there exists two integers N and M such that N is the double of M ( i.e. N = 2 * M).

More formally check if there exists two indices i and j such that :

i != j
0 <= i, j < arr.length
arr[i] == 2 * arr[j]*/

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
    int i,j;

    for(i=0;i<arr.size()-1;i++)
    {
        for(j=i+1;j<arr.size();j++)
        {
            if(arr[i]==2*arr[j] || arr[i]*2==arr[j])
            {
                return true;
            }
        }
    }
    return false;
        
    }
};//completed