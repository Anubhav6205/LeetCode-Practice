/*Given a positive integer n, return the smallest positive integer that is a multiple of both 2 and n.
 */
class Solution {
public:
    int smallestEvenMultiple(int n) {
        
         int i=n;
    int cnt=1;

    while(i%n!=0|| i%2!=0)
    {
        i =n*cnt;
        cnt++;
    }
        return i;
    }
};