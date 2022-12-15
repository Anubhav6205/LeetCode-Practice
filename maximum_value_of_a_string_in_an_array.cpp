/*The value of an alphanumeric string can be defined as:

The numeric representation of the string in base 10, if it comprises of digits only.
The length of the string, otherwise.
Given an array strs of alphanumeric strings, return the maximum value of any string in strs.*/
class Solution {
public:
    
    bool check(string it)
{
    bool z=true;
    for(char x:it)
    {
        if(isalpha(x))
        {
            return true;
           
        }
        
    }
    return false;
}
    int maximumValue(vector<string>& strs) {
         int mx=0;
    for(int i=0;i<strs.size();i++)
    {
        if(check(strs[i]))
        {
            int len=strs[i].length();
            mx=max(mx,len);

        }
        else
        {
            int len=stoi(strs[i]);
             mx=max(mx,len);


        }
    }
    return mx;
        
    }
};