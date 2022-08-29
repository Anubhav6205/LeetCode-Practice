/*You have a water dispenser that can dispense cold, warm, and hot water. Every second, you can either fill up 2 cups with different types of water, or 1 cup of any type of water.

You are given a 0-indexed integer array amount of length 3 where amount[0], amount[1], and amount[2] denote the number of cold, warm, and hot water cups you need to fill respectively. Return the minimum number of seconds needed to fill up all the cups.

 */
class Solution {
public:
    int fillCups(vector<int>& amount) {
           priority_queue<int>pq;
    pq.push(amount[0]);
    pq.push(amount[1]);
    pq.push(amount[2]);
    int cnt=0;
    while(pq.top()!=0)
    {
        int x=pq.top();
        pq.pop();
        int y=pq.top();
        pq.pop();
        x--,y--;
        pq.push(x);
        pq.push(y);
        cnt++;
    }
    cout<<cnt<<endl;
        return cnt;
    }
};