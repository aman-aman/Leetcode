//aman kumar jha
class Solution {
public:
    int dominantIndex(vector<int>& nums)
    {
        vector<int> v;
        for(int i=0;i<nums.size();i++)
            v.push_back(nums[i]);
        sort(nums.begin(),nums.end(),greater<int>());
        int second;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<nums[0])
            {
                second=nums[i];
                break;}
        }
        if(nums[0]>=2*second)
        {
            for(int i=0;i<v.size();i++)
            {
                if(v[i]==nums[0])
                    return i;
            }
        }
        return -1;

    }
};
