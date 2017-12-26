//aman kumar jha
class Solution {
public:
    int distributeCandies(vector<int>& candies)
    {
        map<int,int> mp;
        for(int i=0;i<candies.size();i++)
            mp[candies[i]]++;

        int sis=0;
        for(auto x:mp)
        {
            if(x.second>=1)
            {
                sis++;
            }
            if(sis==candies.size()/2)
                break;
        }
        return sis;

    }
};
