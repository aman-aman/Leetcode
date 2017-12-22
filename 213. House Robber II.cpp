class Solution {
public:
    int rob(vector<int>& nums, int l, int r) {
        int pre = 0, cur = 0;
        for (int i = l; i <= r; i++) {
            int temp = max(pre + nums[i], cur);
            pre = cur;
            cur = temp;
        }
        return cur;
    }
    int rob(vector<int>& nums)
    {
        int n=nums.size();
        if(n==0)
            return 0;
        if(n==1)
            return nums[0];

        return max(rob(nums,0,n-2),rob(nums,1,n-1));
    }
};
