/*Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.

 */
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
           map<int,int>mp1,mp2;
    set<int>s;
    vector<int>x;
    for(int z:nums1){
        mp1[z]=1;
    }

    for(int z:nums2){
        mp2[z]=1;
    }
    for(int z:nums1)
    {
        if(mp1.find(z)!=mp1.end() && mp2.find(z)!=mp2.end())
        {
            s.insert(z);

        }
    }

    for(int z:s)
    {
    
        x.push_back(z);
    }
        return x;
        
    }
};