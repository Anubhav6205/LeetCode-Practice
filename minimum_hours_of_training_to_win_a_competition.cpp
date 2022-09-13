#include <bits/stdc++.h>
using namespace std;
int main()
{
    int initialEnergy=2,initialExperience=4;
    vector<int>energy{1};
    vector<int>experience{3};
    int hours=0;
    int req=0;
    int te=accumulate(energy.begin(),energy.end(),0);
    if(te>=initialEnergy)
    {
        hours+= te- initialEnergy +1;
    }

    for(int i=0;i<experience.size();i++)
    {
        if(experience[i]<initialExperience)
        {
            initialExperience+=experience[i];
        }
        else
        {
            req+= experience[i]-initialExperience;
            initialExperience+=experience[i];
        }

    }
    if(req>0)
    {
    hours+=req+1;
    }
    cout<<hours<<endl;
    
}