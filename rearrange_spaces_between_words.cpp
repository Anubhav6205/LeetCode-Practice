/*You are given a string text of words that are placed among some number of spaces. Each word consists of one or more lowercase English letters and are separated by at least one space. It's guaranteed that text contains at least one word.

Rearrange the spaces so that there is an equal number of spaces between every pair of adjacent words and that number is maximized. If you cannot redistribute all the spaces equally, place the extra spaces at the end, meaning the returned string should be the same length as text.

Return the string after rearranging the spaces.*/
class Solution {
public:
    string reorderSpaces(string text) {
            int i,cnt=0;
    int k=1;
    vector<string>x;
    int space=1;
    string str="";
    for(i=0;i<text.length();i++)
    {
      
        if(space==1 && text[i]!=' ')
        {
            while(text[i]!=' ' && i<text.length())
            {
                str+=text[i];
                i++;
                cout<<"here str="<<str<<endl;
            }
            cout<<"pushed "<<str<<endl;
            x.push_back(str);
            str="";

        }

        if(text[i]==' ')
        {
            cnt++;
            space=1;
        }
        
    }
        cout<<"Total Spaces="<<cnt<<endl;
        
        if(cnt==0)
        {
            return text;
        }

        cout<<"word count="<<x.size()<<endl;
    
    int part,extra;
        if(x.size()==1)
        {
            part=cnt/(x.size());
            extra=cnt%(x.size());
        }
        else
        {
            part=cnt/(x.size()-1);
         extra=cnt%(x.size()-1);
            
        }
        cout<<"part = "<<part<<" extra="<<extra<<endl;
    str="";
    for(i=0;i<x.size();i++)
    {
        str+=x[i];
        int save=part;
        if(i<x.size()-1 || x.size()==1)
        {
        while(save--)
        {
            str+=' ';
        }
        }
    }
    while(extra--)
    {
        str+=' ';
    }
    cout<<str<<".";
        return str;


        
    }
};