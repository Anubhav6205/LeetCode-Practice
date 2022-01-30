/*The power of the string is the maximum length of a non-empty substring that contains only one unique character.

Given a string s, return the power of s.*/
class Solution {
public:
    int maxPower(string s) {
            int i;
    int sum=0,max=-69;
    if(s.length()==1)
    {
        return 1;
    }
    if(s.length()==2)
    {
        if(s[0]==s[1])
        {
            return 2;
        }
        return 1;
    }
    if(s.length()>2)
    {
        for(i=0;i<s.length()-1;i++)
        {
            if(s[i]==s[i+1])
            {
                sum++;
                  if(sum==1)
                {
                    sum++;
                }
                if(sum>max)
                {
                    max=sum;
                }
              

            }
            else 
            {
                sum=0;
            }
        }
        
    }
        if(max==-69)
        {
            return 1;
        }
    return max;
        
    }
};