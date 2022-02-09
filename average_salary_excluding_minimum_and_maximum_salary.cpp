/*You are given an array of unique integers salary where salary[i] is the salary of the ith employee.

Return the average salary of employees excluding the minimum and maximum salary. Answers within 10-5 of the actual answer will be accepted.

 */
        class Solution {
public:
    double average(vector<int>& salary) {
        int n=salary.size();
        int min1=INT_MAX,max1=0,sum=0;
        for(int i=0;i<n;i++){
            min1=min(min1, salary[i]);
            max1=max(max1, salary[i]);
            sum+=salary[i];
        }
        return (sum-(min1+max1))*1.0/(n-2);
    }
};
   