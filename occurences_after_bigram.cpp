/*Given two strings first and second, consider occurrences in some text of the form "first second third", where second comes immediately after first, and third comes immediately after second.

Return an array of all the words third for each occurrence of "first second third".

 */
class Solution {

public:
    vector<string> findOcurrences(string text, string first, string second) {
           vector<string>store,third;
    text+=' ';
    int i;
    string str="";
    for(i=0;i<text.length();i++)
    {
        if(text[i]==' ')
        {
            store.push_back(str);
            str.clear();
        }
        else
        {
        str+=text[i];
        }
        
    }
        
        

    for(i=0;i<store.size()-2;i++)
    {
        if(store[i]==first && store[i+1]==second)
        {
            third.push_back(store[i+2]);
        }
    }
        return third;
        
    }
};