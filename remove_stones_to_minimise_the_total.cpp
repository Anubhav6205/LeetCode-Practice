class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
            priority_queue<int> pq;
   for(auto it:piles)
   {
    pq.push(it);
   }
         while (k--)
    {
        int no = pq.top();
        pq.pop();
        no = no-floor(no/2);
        pq.push(no);
    }
    long long sum = 0;
    while (!pq.empty())
    {
        sum += pq.top();
        pq.pop();
    }
    return sum;
        
    }
};