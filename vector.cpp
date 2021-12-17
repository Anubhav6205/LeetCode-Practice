#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int>p;
    vector<int>q;
    int x=2,y=3;
    p.push_back(x);
    q.push_back(x);
    p.push_back(y);
    p.push_back(NULL);
    q.push_back(y);
    cout<<p.size();
}