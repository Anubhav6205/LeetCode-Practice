/*Given an array of integers arr, replace each element with its rank.

The rank represents how large the element is. The rank has the following rules:

Rank is an integer starting from 1.
The larger the element, the larger the rank. If two elements are equal, their rank must be the same.
Rank should be as small as possible.*/
class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
          unordered_map<int,int>mp;
    int size=arr.size();
    vector<int>x=arr;
    vector<int>y(size);
    int i;
    sort(x.begin(),x.end());
     int rank=1;
    for(i=0;i<x.size();i++)
    {
          if(mp[x[i]]==0)
          {
        mp[x[i]]=rank;// mp[30]=rank now rank = 3
        rank++; //rank =4
          }
    }

    // 10 : 1
    // 20 : 2
    // 30 : 3
    // 40 : 4
    //41 , 42 .... : 0
   
   
    for(i =0 ;i<x.size();i++)
    {
       
        y[i]=mp[arr[i]]; //mp[40] //mp[10]
        //y[0] = 4
        //y[1]= 1
        //y[2]=2
        //y[3]=3
       
        
    }

   return y;
        

        
    }
};