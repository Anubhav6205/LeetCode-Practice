/*Given two stings ransomNote and magazine, return true if ransomNote can be constructed from magazine and false otherwise.

Each letter in magazine can only be used once in ransomNote.*/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int rr=ransomNote.length();
    int count=0;
    for(int i=0;i<ransomNote.length();i++)
    {
        label:
        for(int j=0;j<magazine.length();j++)
        {
            if(ransomNote[i]==magazine[j])
            {
                magazine.erase(magazine.begin()+j);
                i++;
                count++;
                if(i<ransomNote.length())
                {
                    goto label;

                }
                
    
            }

        }
    }
    if(count==rr)
    {
        return true;
    }
    else
    {
        return false;
    }
        
    }
};