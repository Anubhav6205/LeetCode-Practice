/*You are keeping score for a baseball game with strange rules. The game consists of several rounds, where the scores of past rounds may affect future rounds' scores.

At the beginning of the game, you start with an empty record. You are given a list of strings ops, where ops[i] is the ith operation you must apply to the record and is one of the following:

An integer x - Record a new score of x.
"+" - Record a new score that is the sum of the previous two scores. It is guaranteed there will always be two previous scores.
"D" - Record a new score that is double the previous score. It is guaranteed there will always be a previous score.
"C" - Invalidate the previous score, removing it from the record. It is guaranteed there will always be a previous score.
Return the sum of all the scores on the record.*/
class Solution {
public:
    int calPoints(vector<string>& ops) {
         vector<string>x;
    int i,j;
    int one,two,sum;
    string first,sec;
    string s,z;
    stringstream obj1,obj2;
    for(i=0;i<ops.size();i++)
    {
        s=ops[i];
        if(s=="+")
        {
            first=x[x.size()-1];
            sec=x[x.size()-2];

            obj1<<first;
            obj2<<sec;
            obj1>>one;
            obj2>>two;
            sum=one+two;
            z=to_string(sum);
     
            x.push_back(z);
            obj1.clear();
            obj2.clear();
        }
          else if(s=="C")
        {
            x.pop_back();
            
          
        }
       else if(s=="D")
        {
              first=x[x.size()-1];
             obj1<<first;
             obj1>>one;
             one*=2;
             z=to_string(one);
             x.push_back(z);
             cout<<"doubled\n"<<endl;
             obj1.clear();


        }
        else
        {
            x.push_back(ops[i]);
            cout<<"pushed\n"<<endl;
       
        }
  
      
    }
    sum=0;
    for(i=0;i<x.size();i++)
    {
        one=stoi(x[i]);
        sum+=one;
       
    }
    return sum;
        
    }
};