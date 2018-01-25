
//aman kumar jha
class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2)
    {
        map<string,int> mp1;
        map<string,int> mp2;
        for(int i=0;i<list1.size();i++)
            mp1[list1[i]]=i;

        for(int i=0;i<list2.size();i++)
        {
            if(mp1.count(list2[i])>0)
            {
                mp2[list2[i]]=i;
            }
        }
        int minval=INT_MAX;
        vector<string> res;
        for(auto x:mp2)
        {
            minval=min(x.second+mp1[x.first],minval);
        }
        for(auto x:mp2)
        {
            if(minval==(x.second+mp1[x.first]))
                res.push_back(x.first);
        }

        return res;
    }
};
