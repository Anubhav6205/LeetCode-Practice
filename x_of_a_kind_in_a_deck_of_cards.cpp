class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
         map<int,int>mp;
    int i;
    for(auto num:deck)
    {
        mp[num]++;
    }

    bool threecheck=true,twocheck=true,fivecheck=true,sevencheck=true,elevencheck=true;
    for(auto it:mp)
    {
        if(it.second%2!=0)
        {
            twocheck=false;
        }
        if(it.second%3!=0)
        {
            threecheck=false;
        }
         if(it.second%5!=0)
        {
            fivecheck=false;
        }
         if(it.second%7!=0)
        {
            sevencheck=false;
        }
         if(it.second%11!=0)
        {
            elevencheck=false;
        }
    }

    if(twocheck||threecheck||fivecheck||sevencheck||elevencheck)
    {
        return true;
    }
    return false;
        
    }
};