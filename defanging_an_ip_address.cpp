/*Given a valid (IPv4) IP address, return a defanged version of that IP address.

A defanged IP address replaces every period "." with "[.]".

 */
class Solution {
public:
    string defangIPaddr(string address) {
            string x;
    int i;
    for(i=0;i<address.length();i++)
    {
        if(address[i]=='.')
        {
            x+="[.]";
        }
        else
        {
            x+=address[i];
        }
    }
        return x;
        
    }
};