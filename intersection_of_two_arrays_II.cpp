/*Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.

 */

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());
    vector<int>nums3;
    int s1=nums1.size();
    int s2=nums2.size();
    int i=0,j=0;
    while(i<s1 || j<s2)
    {
        if(nums1[i]<nums2[j])
        {
            if(s1!=i+1)
            {
            i++;
            }
            else
            {
                return nums3;
            }
        }
        else if(nums1[i]==nums2[j] )
        {
            nums3.push_back(nums1[i]);
            if(i+1==s1 || j+1==s2)
            {
               return nums3;
            }
            else
            {
                i++;
                j++;
            }
        }
        else if(nums1[i]>nums2[j])
        {
            if(s2!=j+1)
            {
            j++;
            }
            else
            {
                return nums3;
            }
        }
    }
        return nums3;
        
    }
};//competed