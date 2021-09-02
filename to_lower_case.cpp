/*Given a string s, return the string after replacing every uppercase letter with the same lowercase letter.*/
/*int main()
{

    char s[30]="Hello";
    int i;
    int count=sizeof(s);
    for(i=0;i<count;i++)
    {
       if(s[i]>='A' && s[i]<='z')
       {
           s[i]+=32;
       }
    }

    cout<<s;

}*/

class Solution {
public:
    string toLowerCase(string s) {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        return s;
                

        
    }
};