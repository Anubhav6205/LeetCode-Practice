/*You are given a 0-indexed integer array tasks, where tasks[i] represents the difficulty level of a task. In each round, you can complete either 2 or 3 tasks of the same difficulty level.

Return the minimum rounds required to complete all the tasks, or -1 if it is not possible to complete all the tasks.*/
class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        
            unordered_map<int,int>mp;
    for(int i:tasks)
    {
        mp[i]++;
    }
    vector<int>freq;
    for(auto it:mp)
    {
   
        freq.push_back(it.second);
    }
    int cnt=0;
  
    for(int i=0;i<freq.size();i++)
    {
        cout<<"here freq[i]="<<freq[i]<<endl;
        if(freq[i]==1)
        {
            return -1;
        }
        else if(freq[i]==2 || freq[i]==3)
        {
            cnt++;
        }
        else if(freq[i]%3==0)
        {
            cnt+= freq[i]/3;
        }
        else 
        {
            cnt += freq[i]/3   +1;
            
        }

    }

        return cnt;
        
    }
};