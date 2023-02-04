/*Given four integers length, width, height, and mass, representing the dimensions and mass of a box, respectively, return a string representing the category of the box.

The box is "Bulky" if:
Any of the dimensions of the box is greater or equal to 104.
Or, the volume of the box is greater or equal to 109.
If the mass of the box is greater or equal to 100, it is "Heavy".
If the box is both "Bulky" and "Heavy", then its category is "Both".
If the box is neither "Bulky" nor "Heavy", then its category is "Neither".
If the box is "Bulky" but not "Heavy", then its category is "Bulky".
If the box is "Heavy" but not "Bulky", then its category is "Heavy".*/
class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
    long long mul=length;
        mul*= width;
        mul*=height;
    if(((length>=10000 || width>=10000 || height>=10000) || (mul)>=1000000000) && (mass>=100))
    {
        return "Both";
    }
    else if(((length>=10000 || width>=10000 || height>=10000) || (mul)>=1000000000) && !(mass>=100))
    {
        return "Bulky";

    }

    else if(!((length>=10000 || width>=10000 || height>=10000) || (mul)>=1000000000) && (mass>=100))
    {
        return "Heavy";
    }
    return "Neither";
        
    }
};