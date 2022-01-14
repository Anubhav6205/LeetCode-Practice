/*Given an integer n, return a string array answer (1-indexed) where:

answer[i] == "FizzBuzz" if i is divisible by 3 and 5.
answer[i] == "Fizz" if i is divisible by 3.
answer[i] == "Buzz" if i is divisible by 5.
answer[i] == i (as a string) if none of the above conditions are true.*?

class Solution {
public:
    vector<string> fizzBuzz(int n) {
    vector<string>x;
    int i,a;
    for(i=1;i<=n;i++)
    {

        if(i%3==0 && i%5==0)
        {

            x.push_back("FizzBuzz");
        }
        else if(i%3==0)
        {
       
            x.push_back("Fizz");
        }
        else if(i%5==0)
        {
        
            x.push_back("Buzz");
        }
        else 
        {
           
            a=i;
            stringstream ss;
            ss << a;
            string str = ss.str();
            x.push_back(str);
        }

    }
        return x;

        
    }
};