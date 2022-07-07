#include <bits/stdc++.h>
#include <vector>
#include <map>

using namespace std;
int main()
{
    vector<int> nums{1, 1, 1, 2, 2, 3, 5};
    int k = 2;

    map<int, int> mp;
    vector<int> x;
    for (int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]]++;
    }

    priority_queue<pair<int,int>>pq;
    for(auto it:mp)
    {
        pq.push({it.second,it.first});

    }


    while(k--)
    {
        x.push_back(pq.top().second);
        pq.pop();

    }



    

}