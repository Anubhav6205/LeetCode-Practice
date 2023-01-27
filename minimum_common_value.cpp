class Solution {
public:
    /*Given two integer arrays nums1 and nums2, sorted in non-decreasing order, return the minimum integer common to both arrays. If there is no common integer amongst nums1 and nums2, return -1.

Note that an integer is said to be common to nums1 and nums2 if both arrays have at least one occurrence of that integer.*/
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums1.size();i++){
            mp[nums1[i]]=1;
        }
        for(int i=0;i<nums2.size();i++)
        {
            if(mp[nums2[i]]==1)
            {
                return nums2[i];
            }
            

        }
        return -1;
        
    }
};