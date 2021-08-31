/*Given an array of integers arr, write a function that returns true if and only if the number of occurrences of each value in the array is unique.*/

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
    sort(arr.begin(),arr.end());
    vector<int>count;
    int c=0;
    int i;
    for(i=0;i<arr.size();i++)
    {
        c++;
        if(i==0)
        {
            continue;
        }
        else if(arr[i-1] !=arr[i])
        {
            count.push_back(c-1);
            c=1;

        }
        if(i==arr.size()-1)
        {
            count.push_back(c);

        }

    }
    vector<int>duppu;
    duppu=count;
    sort(duppu.begin(),duppu.end());
    duppu.erase(unique(duppu.begin(),duppu.end()),duppu.end());
    int duppusize=duppu.size();
    int origsize=count.size();
    if(duppusize==origsize)
    {
        return true;
    }
    else
    {
        return false;
    }
        
        
    }
};//completed