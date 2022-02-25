class Solution {
/*Given an integer n, add a dot (".") as the thousands separator and return it in string format.

 */
public:
    string thousandSeparator(int n) {
      
            string str=to_string(n);
    string x;
    int cnt=0;
    int pos=str.length()%3,i;
        if(str.length()<4)
        {
            return str;
        }
   

    if(str.length()>3)
    {

        if(pos==0)
        {
            for(i=0;i<str.length();i++)
            {
                cnt++;
       
                cout<<str[i]<<endl;
                x.push_back(str[i]);
                if(cnt==3 && i!=str.length()-1)
                {
                    x.push_back('.');
                    cnt=0;
                }

            }

        }
        else if(pos==1)
        {
            x.push_back(str[0]);
            x.push_back('.');
            for(i=1;i<str.length();i++)
            {
                cnt++;
                cout<<str[i]<<endl;
                x.push_back(str[i]);
                if(cnt==3 && i!=str.length()-1)
                {
                    x.push_back('.');
                    cnt=0;
                }

            }

        }
        else if(pos==2)
        {

            x.push_back(str[0]);
            x.push_back(str[1]);
            x.push_back('.');
            for(i=2;i<str.length();i++)
            {
                cnt++;
                cout<<str[i]<<endl;
                x.push_back(str[i]);
                if(cnt==3 && i!=str.length()-1)
                {
                    x.push_back('.');
                    cnt=0;
                }

            }

        }

    }
    cout<<x;
        return x;

        
    }
};