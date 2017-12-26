//aman kumar jha
class Solution {
public:
    int findPeakElement(vector<int>& nums)
    {
        int peak=*max_element(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(peak==nums[i])
                return i;
        }

    }
};
