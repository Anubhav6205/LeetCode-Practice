/*You are given a positive integer num. You may swap any two digits of num that have the same parity (i.e. both odd digits or both even digits).

Return the largest possible value of num after any number of swaps.*/
class Solution {
public:
    int largestInteger(int num) {
           vector<int>even;
    vector<int>odd;
    vector<int>fuck;
    int n=num;
    int last;
    while(n>0)
    {
        last=n%10;
        if(last&1)
        {
            odd.push_back(last);
        }
        else
        {
            even.push_back(last);
        }
        fuck.push_back(last);
        n/=10;
    }
    sort(odd.begin(),odd.end());
    sort(even.begin(),even.end());
    int x=0;
    for(int i=fuck.size()-1;i>=0;i--)
    {
        last=fuck[i];
  
        if(last&1)
        {
            x=x*10 + odd[odd.size()-1];
       
            odd.pop_back();
        }
        else
        {
            x=x*10 + even[even.size()-1];
    
            even.pop_back();
        }
        n/=10;

    }


        return x;
        
    }
};