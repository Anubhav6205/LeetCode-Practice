/*Given a string s, check if it can be constructed by taking a substring of it and appending multiple copies of the substring together.*/
class Solution {
public:
    bool repeatedSubstringPattern(string s) {

        int size=s.length();
        string str;
        int i,cnt=0;
        for(i=0;i<size-1;i++)
        {
            cnt++;
            string crop=s.substr(0,i+1);
       
            if(size%cnt==0)
            {
                string x="";
                int trav=size/cnt;
                while(trav--)
                {
                    x+=crop;
                }
                if(x==s)
                {
                    
                    return true;
                }
            }
            
        }
        
     
        return false;
        
    }
};