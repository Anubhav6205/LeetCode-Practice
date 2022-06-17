/*Given a string array words, return an array of all characters that show up in all strings within the words (including duplicates). You may return the answer in any order.*/
class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        
          map<char, int> mp1, mp2;
    int i, j;
    vector<string> ans;
    for (i = 0; i < words[0].length(); i++)
    {
       
        mp1[words[0][i]]++;
    }

    for (i = 1; i < words.size(); i++)
    {
        
        mp2.clear();
        for (j = 0; j < words[i].length(); j++)
        {

            mp2[words[i][j]]++;
        }

        for (auto &it : mp1)
        {

            mp1[it.first] = min(mp1[it.first], mp2[it.first]);
        }
    }
    string str;

   

    for (auto &it : mp1)
    {
        
     
        int x=it.second;
 
        while(x--)
        {
      
            str=it.first;
            ans.push_back(str);
        }
    }

   
        return ans;
        
    }
};