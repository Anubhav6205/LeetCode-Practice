/*You have a chat log of n messages. You are given two string arrays messages and senders where messages[i] is a message sent by senders[i].

A message is list of words that are separated by a single space with no leading or trailing spaces. The word count of a sender is the total number of words sent by the sender. Note that a sender may send more than one message.

Return the sender with the largest word count. If there is more than one sender with the largest word count, return the one with the lexicographically largest name.

Note:

Uppercase letters come before lowercase letters in lexicographical order.
"Alice" and "alice" are distinct.*/
class Solution {
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        
          unordered_map<string,int>mp;
    string sentence;
    int i;
    for(i=0;i<senders.size();i++){
        sentence=messages[i];
        int cnt=0;
        sentence+=' ';
        for(int j=0;j<sentence.length();j++)
        {
            if(sentence[j]==' ')
            {
                cnt++;
            }
        }
        mp[senders[i]]+=cnt;

    }
    int mx=INT_MIN;
    string name;

    for(auto it:mp)
    {
        if(it.second>mx)
        {
            mx=it.second;
            name=it.first;
        }
        else if(it.second==mx)
        {
            if(it.first>name)
            {
                name=it.first;
            }
        }
    }
        return name;
        
    }
};