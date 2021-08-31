/*class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
    int flag=0;
    int i;
    int size=nums.size();
    vector<int>orig;
    vector<int>rev;
    orig=nums;
    sort(orig.begin(),orig.end());
    rev=orig;
    reverse(rev.begin(),rev.end());
    if(orig==nums||rev==nums)
    {
        flag=1;
    }
    if(flag==1)
    {
        return true;
    }
    else
    {
        return false;
    }
        
    }
};*/

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    vector<int>nums{1,2,2,3};
    int flag=0;
    int i;
    int size=nums.size();
    vector<int>orig;
    vector<int>rev;
    orig=nums;
    sort(orig.begin(),orig.end());
    rev=orig;
    reverse(rev.begin(),rev.end());
    if(orig==nums||rev==nums)
    {
        flag=1;
    }
    if(flag==1)
    {
        return true;
    }
    else
    {
        return false;
    }

}

//completed