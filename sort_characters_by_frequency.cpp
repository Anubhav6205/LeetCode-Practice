/*Given a string s, sort it in decreasing order based on the frequency of the characters. The frequency of a character is the number of times it appears in the string.

Return the sorted string. If there are multiple answers, return any of them.*/
class Solution {
public:
    string frequencySort(string s) {
        
            unordered_map<char,int>mp;
    priority_queue<pair<int,char>>pq;
    string str="";
    int i,x;


    for(i=0;i<s.length();i++)
    {
        mp[s[i]]++;
    }
    for(auto i:mp)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }



    for(auto i:mp)
    {
        pq.push(make_pair(i.second,i.first));

    }

    while(!pq.empty())
    {
        x=pq.top().first;
      
        while(x--)
        {
            str+=pq.top().second;
         
           

        }
        pq.pop();
     
    }

    cout<<str;
        return str;
        
        
    }
};