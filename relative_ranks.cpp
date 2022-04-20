/*You are given an integer array score of size n, where score[i] is the score of the ith athlete in a competition. All the scores are guaranteed to be unique.

The athletes are placed based on their scores, where the 1st place athlete has the highest score, the 2nd place athlete has the 2nd highest score, and so on. The placement of each athlete determines their rank:

The 1st place athlete's rank is "Gold Medal".
The 2nd place athlete's rank is "Silver Medal".
The 3rd place athlete's rank is "Bronze Medal".
For the 4th place to the nth place athlete, their rank is their placement number (i.e., the xth place athlete's rank is "x").
Return an array answer of size n where answer[i] is the rank of the ith athlete.*/

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
            int n=score.size();
    vector<string>ans(n);
    priority_queue<int>pq;
    int i,cnt=0;
    int top,index;
    for(i=0;i<score.size();i++)
    {
        pq.push(score[i]);

    }
    while(!pq.empty())
    {
        top=pq.top();
        for(i=0;i<score.size();i++)
        {
            if(top==score[i])
            {
                index=i;
                break;

            }

        }
        pq.pop();
        cnt++;
        if(cnt==1)
        {
            
            ans[index]="Gold Medal";
        }
        else if(cnt==2)
        {
             ans[index]="Silver Medal";

        }
        else if(cnt==3)
        {
             ans[index]="Bronze Medal";

        }
        else
        {
            ans[index]=to_string(cnt);
        }
      
        
    }
   
    return ans;
    }
};