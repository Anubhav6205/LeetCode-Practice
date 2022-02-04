/*A bus has n stops numbered from 0 to n - 1 that form a circle. We know the distance between all pairs of neighboring stops where distance[i] is the distance between the stops number i and (i + 1) % n.

The bus goes along both directions i.e. clockwise and counterclockwise.

Return the shortest distance between the given start and destination stops.

 */
class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
            int first=0,second=0;
    int i;
    second=accumulate(distance.begin(),distance.end(),0);
         if(destination<start)
    {
        int swap=destination;
        destination=start;
        start=swap;
    }
    for(i=start;i<destination;i++)
    {
        first+=distance[i];
        
        cout<<"here:"<<distance[i]<<endl;
        
    }
    second-=first;
        if(first>second)
        {
            return second;
        }
        return first;
    cout<<"FIRST:"<<first<<" SECOND:"<<second;
        
    }
};