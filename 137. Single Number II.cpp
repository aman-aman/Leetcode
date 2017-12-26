//aman kumar jha
class Solution {
public:
    int singleNumber(vector<int>& a)
    {
        map<int,int> mp;
        for(int i=0;i<a.size();i++)
            mp[a[i]]++;

        int res;
        for(int i=0;i<a.size();i++)
        {
            if(mp[a[i]]==1)
                return a[i];
        }

    }
};
