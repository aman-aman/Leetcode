//aman kumar jha
class Solution
{
public:
    int searchInsert(vector<int>& nums, int target)
    {
        if(binary_search(nums.begin(),nums.end(),target))
        {
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]==target)
                    return i;
            }
        }
        else
        {
            int loc=nums.size();
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]>target)
                {
                    loc=i;
                    break;
                }
            }
            return loc;
        }
        return 0;
    }
};
