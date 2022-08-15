/*You are given a phone number as a string number. number consists of digits, spaces ' ', and/or dashes '-'.

You would like to reformat the phone number in a certain manner. Firstly, remove all spaces and dashes. Then, group the digits from left to right into blocks of length 3 until there are 4 or fewer digits. The final digits are then grouped as follows:

2 digits: A single block of length 2.
3 digits: A single block of length 3.
4 digits: Two blocks of length 2 each.
The blocks are then joined by dashes. Notice that the reformatting process should never produce any blocks of length 1 and produce at most two blocks of length 2.

Return the phone number after formatting.*/
class Solution {
public:
    string reformatNumber(string number) {
            string str = "";
    string x = "";
    int i = 0;
    for (i = 0; i < number.length(); i++)
    {
        if (number[i] >= '0' && number[i] <= '9')
        {
            str += number[i];
        }
    }

    cout << str << endl;
    if (str.length() % 3 == 0)
    {
        int size=str.length();

    
        for(i=0;i<str.length();i+=3)
        {
             if((size-i) == 3)
            {
                break;
            }
            string z=str.substr(i,3);
            x+=z+'-';
        }
        x+=str.substr(str.length()-3,3);

    }
    else if(str.length()%3==1)
    {
        int size=str.length();
        for(i=0;i<str.length();i+=3)
        {
            if((size-i) == 4)
            {
                break;
            }
            string z=str.substr(i,3);
            x+=z+'-';


        }
        x+= str.substr(str.length()-4,2)+'-'+str.substr(str.length()-2,2);
        cout<<"second"<<endl;
    }
    else if(str.length()%3==2)
    {
        int size=str.length();
        for(i=0;i<str.length();i+=3)
        {
            if((size-i) == 2)
            {
                break;
            }
            string z=str.substr(i,3);
            x+=z+'-';


        }
        x+= str.substr(str.length()-2,2);
        cout<<"third"<<endl;

    }
    cout<<"here "<<x<<endl;
        return x;
    }
};