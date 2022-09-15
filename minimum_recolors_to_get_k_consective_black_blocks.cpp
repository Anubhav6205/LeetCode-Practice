class Solution {
public:
    int minimumRecolors(string blocks, int k) {
            int mn =INT_MAX,freq=0;
    int i;
    for(i=0;i<k;i++)
    {
        if(blocks[i]=='W')
        {
            freq++;
        }

    }
    mn=min(mn,freq);
    for(i=k;i<blocks.length();i++)
    {
        if(blocks[i-k]=='W')
        {
            freq--;
        }
        if(blocks[i]=='W')
        {
            freq++;
        }
        mn=min(mn,freq);
        
    }
    cout<<mn<<endl;
        return mn;
    }
};