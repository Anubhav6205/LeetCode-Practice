/*There is a special typewriter with lowercase English letters 'a' to 'z' arranged in a circle with a pointer. A character can only be typed if the pointer is pointing to that character. The pointer is initially pointing to the character 'a'.*/
class Solution {
public:
    int minTimeToType(string word) {
           int i,sum=0;
    int dist=0;
    char prev='a';
    int count=0;
    for(i=0;i<word.length();i++)
    {
        if(i==0 && word[i]=='a')
        {
            sum+=1;
            count=6969;
        }

        dist=abs(word[i]-prev);
        if(dist>13)
        {
            dist=abs(dist-26);
        }
        cout<<"Dist:"<<dist<<endl;
        
        sum+=dist;
        if(count!=6969)
        {
        sum+=1;
        }
        
        prev=word[i];
        count++;
    }
        return sum;
        
    }
};