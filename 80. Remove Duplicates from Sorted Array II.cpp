//aman kumar jha
class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]++;

        nums.clear();
        for(auto x:mp)
        {
            int val=x.second;
            int t=min(val,2);
            while(t)
            {
                t--;
                nums.push_back(x.first);
                //cout<<x.first<<"\n";
            }
        }
        return nums.size();
    }
};
