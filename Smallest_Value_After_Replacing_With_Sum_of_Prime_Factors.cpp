#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 15;
    int isprime = 1;
    while (isprime == 1)
    {
        for (int i = 2; i <= n / 2; i++)
        {
            isprime=0;
            cout<<"prime set to 0\n";
            if (n % i == 0)
            {
                cout<<"for n "<<n<<" i "<<i<<endl;
                n = i + (n / i);
                isprime = 1;
                cout<<"prime set to 1\n";
                break;
            }
        }
        cout<<"prime value="<<isprime<<endl;
        if(isprime==0)
        {
            break;
        }
    }
}