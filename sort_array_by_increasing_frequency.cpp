#include <bits/stdc++.h>
#include <vector>
#include <map>

using namespace std;
int main()
{
    vector<int> nums{1, 1, 2,2,2,3};


    map<int, int> mp;
    vector<int> x;
    for (int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]]++;
    }

   priority_queue<pair<int,int>>pq;
    for(auto it:mp)
    {
        pq.push({-1 *it.second,it.first});
    }

    while(pq.size() > 0)
    {
        int freq=-1 * pq.top().first;
        while(freq--)
        {
            x.push_back(pq.top().second);

        }
        pq.pop();
    }

    
}