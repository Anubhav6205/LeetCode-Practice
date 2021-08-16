/*Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.
For example, 2 is written as II in Roman numeral, just two one's added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.*/

int romanToInt(char * s){
    int sum=0;
    int n;
    n=strlen(s);
    int i;
    int num=0;
    for(i=0;i<n;i++)
    {
        switch(s[i])
        {
            case 'I' : num=1;
            if(s[i+1]=='V')
            {
                num=4;
                i++;
            }
            if(s[i+1]=='X')
            {
                num=9;
                i++;
            }  
            sum+=num;
            break;
            case 'V' : num=5;
            
            sum+=num;
            break;
            case 'X' : num=10;
            if(s[i+1]=='L')
            {
                num=40;
                i++;
            }
             if(s[i+1]=='C')
            {
                num=90;
                i++;
            }
            sum+=num;
            break;
            case 'L' : num=50;
            sum+=num;
            break;
            case 'C' : num=100;
            {
                if(s[i+1]=='D')
                {
                    num=400;
                    i++;
                }
                if(s[i+1]=='M')
                {
                    num=900;
                    i++;
                }
            }
            sum+=num;
            break;
            case 'D' : num=500;
            sum+=num;
            break;
            case 'M' : num=1000;
            sum+=num;
            break; 
        }
    }
    return sum;
    
    

}

