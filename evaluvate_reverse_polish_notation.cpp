/*Evaluate the value of an arithmetic expression in Reverse Polish Notation.

Valid operators are +, -, *, and /. Each operand may be an integer or another expression.

Note that division between two integers should truncate toward zero.

It is guaranteed that the given RPN expression is always valid. That means the expression would always evaluate to a result, and there will not be any division by zero operation.*/
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
            int calc = 0;
    stack<int> s;
    for (int i = 0; i < tokens.size(); i++)
    {

        if(tokens[i] == "+")
        {
            int first=s.top();
            s.pop();
            int second=s.top();
            s.pop();
            s.push(first+second);
           
        }
        else if (tokens[i] == "-")
        {
            int first=s.top();
            s.pop();
            int second=s.top();
            s.pop();
            s.push(second-first);
        }
        else if (tokens[i] == "*")
        {
            int first=s.top();
            s.pop();
            int second=s.top();
            s.pop();
            s.push(first*second);
        }
        else if (tokens[i] == "/")
        {
                   int first=s.top();
            s.pop();
            int second=s.top();
            s.pop();
            s.push(second/first);
        }
        else
        {
            s.push(stoi(tokens[i]));

        }

       
    }
 
        return s.top();
    }
};