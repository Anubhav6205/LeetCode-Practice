/*Your friend is typing his name into a keyboard. Sometimes, when typing a character c, the key might get long pressed, and the character will be typed 1 or more times.

You examine the typed characters of the keyboard. Return True if it is possible that it was your friends name, with some characters (possibly none) being long pressed.*/
class Solution {
public:
    bool isLongPressedName(string name, string typed) {
            if(name[0]!=typed[0] ||name[name.length()-1]!= typed[typed.length()-1])

    {
                return false;
        cout<<"false";
    }
    int i,j=0;
    for(i=0;i<name.length();)
    {
        if(typed[j]==name[i])
        {
            i++;
            j++;
        }
        else
        {
            j++;
        }
        if(typed[j]!=name[i] && typed[j]!=name[i-1])
        {
            return false;
            cout<<"false";
        }

        

    }
        return true;
    cout<<"true";
        
    }
};