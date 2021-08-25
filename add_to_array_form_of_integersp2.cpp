/*The array-form of an integer num is an array representing its digits in left to right order.

For example, for num = 1321, the array form is [1,3,2,1].
Given num, the array-form of an integer, and an integer k, return the array-form of the integer num + k.*/
class Solution {
public:
    vector<int> addToArrayForm(vector<int>& A, int K) {
        vector<int> ans;
        int carry = 0, i = A.size()-1;
        while(i>=0 || carry > 0 || K!=0){
            if(K!=0){
                carry += K%10;
                K = K/10;
            }
            if(i>=0){
                carry += A[i];
                i--;                
            }
            ans.push_back(carry%10);
            carry = carry/10;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};