/*You are given an integer n and an integer start.

Define an array nums where nums[i] = start + 2 * i (0-indexed) and n == nums.length.

Return the bitwise XOR of all elements of nums.*/
class Solution {
public:
    int xorOperation(int n, int start) {
         vector<int>x;
    int i=0;
    while(n--)
    {
        x.push_back(start+(2*i));
        i++;
    }
    int z=0;
    for(int a:x)
    {
        cout<<a<<endl;
        z=z^a;
    }
    cout<<z<<endl;
        return z;
    }
};