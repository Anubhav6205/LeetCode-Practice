/*Implement strStr().

Return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.*/
int strStr(char * haystack, char * needle){

char *p;
int i,j;
p=strstr(haystack,needle);

if(p)
return (int)p-(int)haystack; 
else
return -1;
    


}