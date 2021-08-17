/*Given a string s consisting of some words separated by some number of spaces, return the length of the last word in the string.

A word is a maximal substring consisting of non-space characters only.*/

int lengthOfLastWord(char * s)
{
    int hemlo=0;
    int i,j;
    int n=strlen(s);
    int punch=0;
    int num=strlen(s);
    int count=0;
    int hex=0;
    for(i=num-1;i>=0;i--)
    {
        hex++;
        if(s[i]==' ' && punch==0)
        {
            hemlo++;
        }
        else
        {
            punch++;
        }

        if(s[i] !=' ')
        {
            for(j=num-hex;j>=0;j--)
            {
              count++;
              if(s[j]==' ')
              {
                  
                  goto label;
                  
              }
            }
        }
        else
        {
            continue;
        }
    }
    return num-hemlo;
    label:
    return count-1;
    
    

}