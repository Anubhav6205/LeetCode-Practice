/*You are given a 0-indexed string s and a 0-indexed integer array spaces that describes the indices in the original string where spaces will be added. Each space should be inserted before the character at the given index.

For example, given s = "EnjoyYourCoffee" and spaces = [5, 9], we place spaces before 'Y' and 'C', which are at indices 5 and 9 respectively. Thus, we obtain "Enjoy Your Coffee".
Return the modified string after the spaces have been added.*/
class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {

 int space=spaces[0],i;
    int k=0;
    int spacesize=spaces.size();
    string str="";
    for(i=0;i<s.length();i++)
    {
       
        if(i==space )
        {
            str+=' ';
            if(k<spacesize-1)
            {
                k++;
            }
            space=spaces[k];
            
        }
         str+=s[i];


    }
   
        return str;
    }
};