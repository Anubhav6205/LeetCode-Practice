/*Given a positive integer num, write a function which returns True if num is a perfect square else False.*/

class Solution {
public:
    bool isPerfectSquare(int num) {
        
        float x=sqrt(num);
        cout<<"X : "<<x;
        if(x==int(x))
        {
        return true;
        }
        else
        {
            return false;
        }
        
        
        
    }
};