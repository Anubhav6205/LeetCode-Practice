/*Given an integer n, return true if it is a power of three. Otherwise, return false.

An integer n is a power of three, if there exists an integer x such that n == 3x.*/

bool isPowerOfThree(int n){
    if(n%3!=0 && n!=1)
    {
        return false;
    }
  
    for(int i=0;i<100;i++)
    {
        if(pow(3,i)==n)
        {
            return true;
        }
    }
    return false;
}
