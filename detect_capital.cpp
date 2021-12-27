#include <bits/stdc++.h>
using namespace std;
int main()
{
    string word="goaT";
    int check=0,i;
    if(word.length()==1)
    {
        check=0;
    }
    
    if(word[0]>='a' && word[0]<='z')
    {
        for(i=0;i<word.length();i++)
        {
            if(word[i]>='A' && word[i]<='Z')
            {
                cout<<"1"<<endl;
                check=1;
            }
        }

    }
    else if(word[0]>='A' && word[0]<='Z')
    {
        if(word[1]>='a' && word[1]<='z')
        {
            for(i=1;i<word.length();i++)
            {
                if(word[i]>='A' && word[i]<='Z')
                {
                    cout<<word[0]<<endl;
                    cout<<"2"<<endl;
                    check=1;
                }
                
            }
        }
        else if(word[1]>='A' && word[1]<='Z')
        {
            for(i=1;i<word.length();i++)
            {
                if(word[i]>='a' && word[i]<='z')
                {
                    cout<<"3"<<endl;
                    check=1;
                }
                
            }

        }
        

    }

    if(check==1)
    {
        cout<<"Error";
    }
    else
    {
        cout<<"no error";
    }

}