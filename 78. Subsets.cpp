//aman kumar jha
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums)
    {
        vector<vector<int> > vec(pow(2,nums.size()));
        for(int i=0;i<pow(2,nums.size());i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                if(i&(1<<j))
                    vec[i].push_back(nums[j]);
            }
        }
        return vec;

    }
};
