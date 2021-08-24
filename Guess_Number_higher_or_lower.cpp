/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */
/*We are playing the Guess Game. The game is as follows:

I pick a number from 1 to n. You have to guess which number I picked.

Every time you guess wrong, I will tell you whether the number I picked is higher or lower than your guess.

You call a pre-defined API int guess(int num), which returns 3 possible results:

-1: The number I picked is lower than your guess (i.e. pick < num).
1: The number I picked is higher than your guess (i.e. pick > num).
0: The number I picked is equal to your guess (i.e. pick == num).
Return the number that I picked.*/

int guessNumber(int n){
    int max=n,min=1;
    while(true)
    {
        int mid=(max-min)/2+min;
        int res=guess(mid);
        if(res==0)
        {
            return mid;
            
        }
        else if(res==1)
        {
            min=mid+1;
        }
        else
        {
            max=mid-1;
        }
    }
    return 0;
    
    
	
}
