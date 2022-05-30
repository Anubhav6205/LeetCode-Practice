/*You are given a 0-indexed string num of length n consisting of digits.

Return true if for every index i in the range 0 <= i < n, the digit i occurs num[i] times in num, otherwise return false.*/
class Solution {
public:
    bool digitCount(string num) {
           unordered_map<int,int>mp;
    int i;
    for(i=0;i<num.length();i++)
    {
        int z=num[i]-'0';
        cout<<z<<endl;
        mp[z]++;
    }

    
    for(i=0;i<num.length();i++)
    {
        if(mp[i]!=num[i]-'0')
        {
            return false;
            cout<<"false";
        }
       
    }
        return true;
    cout<<"true";
        
    }
};