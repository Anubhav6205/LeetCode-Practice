/*Given a string s and a character letter, return the percentage of characters in s that equal letter rounded down to the nearest whole percent.

 */
class Solution {
public:
    int percentageLetter(string s, char letter) {
          float cnt=0;
    int i;
    for(i=0;i<s.length();i++) {
        if(s[i]==letter) cnt++;

    }
        float length=s.length();
        
        

    int ans=(cnt*100)/length;
    cout<<ans<<endl;
        return ans;
        
    }
};