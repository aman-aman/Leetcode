//aman kumar jha
class Solution {
public:
    int findDuplicate(vector<int>& nums)
    {
        int n=nums.size();
        vector<int> cnt(n+1);
        for(int i=0;i<n;i++)
            cnt[nums[i]]++;


        int res;
        for(int i=0;i<cnt.size();i++)
        {
            if(cnt[i]>1)
            {
                res=i;
                break;
            }
        }
        return res;

    }
};
