//aman kumar jha
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k)
    {
        if(k<=1)
            return 0;
        int pdt=1,ans=0,left=0;
        for(int i=0;i<nums.size();i++)
        {
            pdt=pdt*nums[i];
            while(pdt>=k)
                pdt=pdt/nums[left++];
            ans=ans+i-left+1;
        }
        return ans;
    }
};
