//aman kumar jha
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums)
    {
        int n=nums.size();
        vector<int> cnt(n+1,0);
        vector<int> res;
        for(int i=0;i<n;i++)
            cnt[nums[i]]++;
        for(int i=0;i<cnt.size();i++)
        {
            if(cnt[i]>1)
                res.push_back(i);
        }
        return res;


    }
};
