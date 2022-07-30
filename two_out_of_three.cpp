/*Given three integer arrays nums1, nums2, and nums3, return a distinct array containing all the values that are present in at least two out of the three arrays. You may return the values in any order.*/
class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        
            map<int,int>mp1,mp2,mp3;
    int i;
    for(i=0;i<nums1.size();i++){
        mp1[nums1[i]]=1;
    }

    
    for(i=0;i<nums2.size();i++){
        mp2[nums2[i]]=1;
    }

    
    for(i=0;i<nums3.size();i++){
        mp3[nums3[i]]=1;
    }

    set<int>x;
    for(auto it:mp1)
    {
        if(mp2[it.first]==1 || mp3[it.first]==1)
        {
           
            x.insert(it.first);
           
        }

    }


    for(auto it:mp2)
    {
        if(mp3[it.first]==1)
        {
              
            x.insert(it.first);
        }
    }
    vector<int>r;
    for(int ff:x)
    {
        r.push_back(ff);
    }
        return r;
        
    }
};