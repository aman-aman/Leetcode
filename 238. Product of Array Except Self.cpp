//aman kumar jha
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums)
    {
        int n=nums.size();
        vector<int> dp1(n,1),dp2(n,1);
        vector<int> res(n,1);
        for(int i=0;i<n-1;i++)
            dp1[i+1]=dp1[i]*nums[i];

        for(int i=n-1;i>0;i--)
            dp2[i-1]=dp2[i]*nums[i];

        for(int i=0;i<n;i++)
            res[i]=dp1[i]*dp2[i];

        return res;

    }
};
