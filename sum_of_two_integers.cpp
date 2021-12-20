#include  <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    int a=10,b=20;
    vector<int>x;
    x.push_back(a);
    x.push_back(b);
    int sum=accumulate(x.begin(),x.end(),0);
    cout<<sum;
    
    
    
}