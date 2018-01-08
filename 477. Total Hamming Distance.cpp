//aman kumar jha
class Solution {
public:
    int totalHammingDistance(vector<int>& nums)
    {
        long long ans=0;
        if(nums.size()==0)
            return ans;
        for(int i=0;i<32;i++)
        {
            int k=0;
            for(int j=0;j<nums.size();j++)
            {
                k+=(nums[j]>>i)&1;
            }
            ans+=k*(nums.size()-k);
        }
        return ans;
    }
};
