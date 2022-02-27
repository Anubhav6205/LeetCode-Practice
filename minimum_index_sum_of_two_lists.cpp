/*Suppose Andy and Doris want to choose a restaurant for dinner, and they both have a list of favorite restaurants represented by strings.

You need to help them find out their common interest with the least list index sum. If there is a choice tie between answers, output all of them with no order requirement. You could assume there always exists an answer.*/
class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
            vector <string>save(1);
    int i,j;
    int sum=0,minsum=6969;
    for(i=0;i<list1.size();i++)
    {
       
        for(j=0;j<list2.size();j++)
        {
           
            if(list1[i]==list2[j])
            {
                sum=i+j;
                if(sum==minsum)
                {
                save.push_back(list1[i]);
                    
                }
                else if(sum<minsum)
                {
                    save[0]=list1[i];
                    minsum=sum;

                }
              
                sum=0;
            }
        }
    }
        return save;
        
    }
};