//aman kumar jha
class Solution {
public:
    bool search(vector<int>& nums, int target)
    {
        if(nums.size()==0)
            return false;

        int t=false;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            { t=true;break;}
        }

        return t;

    }
};
