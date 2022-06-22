/*Given a date string in the form Day Month Year, where:

Day is in the set {"1st", "2nd", "3rd", "4th", ..., "30th", "31st"}.
Month is in the set {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"}.
Year is in the range [1900, 2100].
Convert the date string to the format YYYY-MM-DD, where:

YYYY denotes the 4 digit year.
MM denotes the 2 digit month.
DD denotes the 2 digit day.*/
class Solution {
public:
    string reformatDate(string date) {
      string str = date.substr(date.length() - 4, 4) + '-';
    string month = date.substr(date.length() - 8, 3);
    string arr[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    for (int i = 0; i < 12; i++)
    {
        if (arr[i] == month)
        {
            if (i < 9)
            {
                str += '0' + to_string(i + 1) + '-';
                break;
            }
            else
            {
                str += to_string(i + 1) + '-';
                break;
            }
        }
    }
    if (date.length() == 13)
    {
        month = date.substr(0, 2);
    }
    else if (date.length() == 12)
    {
        month ='0'+ date.substr(0, 1);
    }
    str += month;
    cout << str << endl;
        return str;
    }
};