#include <bits/stdc++.h>
#include <map>
using namespace std;
int main()
{

       map<string,int>mp;
        for(int i=0;i<list1.size();i++)
        {
            mp[list1[i]]=i;
        }
        
        for(int i=0;i<list2.size();i++)
        {
            mp[list2[i]]+=i;
        }
        
        pair<string,int>p;
        p.first="x";
        p.second=INT_MIN;
        for(auto it:mp)
        {
            if(p.second<it.second)
            {
                p.second=it.second;
                p.first=it.first;
            }
        }
        vector<string>ans;
        ans.push_back(p.first);

}
