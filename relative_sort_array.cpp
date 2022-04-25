/*Given two arrays arr1 and arr2, the elements of arr2 are distinct, and all elements in arr2 are also in arr1.

Sort the elements of arr1 such that the relative ordering of items in arr1 are the same as in arr2. Elements that do not appear in arr2 should be placed at the end of arr1 in ascending order.

 */
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        
            vector<int>final;
    int count[10000]={0};
    int i;
    for(i=0;i<arr1.size();i++)
    {
        ++count[arr1[i]];
    }
    for(i=0;i<arr2.size();i++)
    {
        while(count[arr2[i]]!=0)
        {
            final.push_back(arr2[i]);
            --count[arr2[i]];
        }
    }
    for(i=0;i<10000;i++)
    {
        while(count[i]!=0)
        {
            final.push_back(i);
            --count[i];
        }
    }
    
        return final;
        
    }
};