/*Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.*/

int addDigits(int num){
    int sum;
    int last;
    while(num>9)
    {
        sum=0;
        last=num%10;
        num=num/10;
        sum+=sum+last+num;
        num=sum;
    }
    return num;

}