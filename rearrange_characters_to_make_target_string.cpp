/*You are given two 0-indexed strings s and target. You can take some letters from s and rearrange them to form new strings.

Return the maximum number of copies of target that can be formed by taking letters from s and rearranging them.*/

class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        
            int i;
    map<char,int>mp1,mp2;
    for(i=0;i<s.length();i++) {
        mp1[s[i]]++;

    }

      for(i=0;i<target.length();i++)
    {
        mp2[target[i]]++;

    }
     int minn=INT_MAX;
     for(i=0;i<target.length();i++)
     {
         minn=min(minn,mp1[target[i]]/mp2[target[i]]);
         cout<<mp1[target[i]]/mp2[target[i]]<<endl;
     }
     cout<<minn<<endl;
    return minn;
        
    }
};