/*Given a string columnTitle that represents the column title as appears in an Excel sheet, return its corresponding column number.*/
class Solution {
public:
int titleToNumber(string columnTitle) {
    
    int n=columnTitle.length();
    int number=0;
    for(int i=0;i<n;i++){

        number+=(columnTitle[i]-64)*pow(26,n-i-1);
    }
    return number;        
}
};