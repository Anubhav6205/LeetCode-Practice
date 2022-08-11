//determine color of a chessboard square

class Solution {
public:
    bool squareIsWhite(string coordinates) {
            int first=coordinates[0]-'a';
    int second=coordinates[1]-'0';
    cout<<"first= "<<first<<" second= "<<second<<endl;
    if(first%2==0)
    {
        if(second%2==0)
        {
            return true;
        }
        return false;
    }
    else
    {
        if(second%2==0)
        {
            return false;
        }
        return true;
    }
        return true;
        
    }
};