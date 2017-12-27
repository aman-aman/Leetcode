//aman kumar jha
class Solution {
public:
    int minMoves2(vector<int>& nums)
    {
        int i=0,j=nums.size()-1,res=0;
        sort(nums.begin(),nums.end());
        while(i<j)
        {
            res+=abs(nums[j]-nums[i]);
            i++;
            j--;
        }
        return res;
    }
};
