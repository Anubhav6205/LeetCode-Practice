/*Given an integer x, return true if x is palindrome integer.

An integer is a palindrome when it reads the same backward as forward. For example, 121 is palindrome while 123 is not.

 */

class Solution {
public:
    bool isPalindrome(int x) {
    if(x>=0 && x<=9)
    {
        return true;
    }
    if(x<0)
    {
        return false;
    }
    vector<int>rev;
    vector<int>orig;
    int n=x;
    while(n>0)
    {
        int last=n%10;
        rev.push_back(last);
        n=n/10;
    }
    orig=rev;
    reverse(rev.begin(),rev.end());
    if(orig==rev)
    {
        return true;
    }
    else
    {
        return false;
    }
        
    }
};

//completed