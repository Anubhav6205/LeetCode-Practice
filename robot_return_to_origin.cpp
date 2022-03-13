/*There is a robot starting at the position (0, 0), the origin, on a 2D plane. Given a sequence of its moves, judge if this robot ends up at (0, 0) after it completes its moves.

You are given a string moves that represents the move sequence of the robot where moves[i] represents its ith move. Valid moves are 'R' (right), 'L' (left), 'U' (up), and 'D' (down).

Return true if the robot returns to the origin after it finishes all of its moves, or false otherwise.*?
class Solution {
public:
    bool judgeCircle(string moves) {
            int i;
    int lr=0,ud=0;
    for(i=0;i<moves.length();i++)
    {
        if(moves[i]=='U')
        {
            ud++;
        }
        else if(moves[i]=='D')
        {
            ud--;
        }
        else if(moves[i]=='L')
        {
            lr++;
        }
        else if(moves[i]=='R')
        {
            lr--;
        }
    }
    if(lr==0 && ud==0)
    {
        return true;
    }
    return false;
        
    }
};