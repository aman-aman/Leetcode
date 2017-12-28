//aman kumar jha
class Solution {
public:
    int search(vector<int>& nums, int target)
    {
        if(nums.size()==0)
            return -1;

        int t=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            { t=i;break;}
        }

        return t;
    }
};
