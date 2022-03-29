/*You are given a string s consisting of lowercase English letters. A duplicate removal consists of choosing two adjacent and equal letters and removing them.

We repeatedly make duplicate removals on s until we no longer can.

Return the final string after all such duplicate removals have been made. It can be proven that the answer is unique.*/
class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>x;
        int i;
        for(i=0;i<s.length();i++)
        {
            if(x.empty()==true)
            {
                x.push(s[i]);
            }
            else if(s[i]==x.top())
            {
                x.pop();
            }
            else
            {
                x.push(s[i]);
            } 

        }
        string str="";
        while(!x.empty()){
            str+=x.top();
            x.pop();

        }
        reverse(str.begin(),str.end());
        cout<<str;
        return str;

    }
}