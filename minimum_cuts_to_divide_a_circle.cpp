/*A valid cut in a circle can be:

A cut that is represented by a straight line that touches two points on the edge of the circle and passes through its center, or
A cut that is represented by a straight line that touches one point on the edge of the circle and its center.
Some valid and invalid cuts are shown in the figures below.


Given the integer n, return the minimum number of cuts needed to divide a circle into n equal slices.*/
class Solution {
public:
    
    bool checkpoweroftwo(int n)
{
    if (n == 1)
    {
        return true;
    }
    if (n % 2 == 1 || n == 0)
    {
        return false;
    }
    return checkpoweroftwo(n / 2);
}

    
    int numberOfCuts(int n) {
        
    if (checkpoweroftwo(n))
    {
        return n / 2;
    }
    if(n%2==0)
    {
        return n/2;
    }
    return n;
        
    }
};