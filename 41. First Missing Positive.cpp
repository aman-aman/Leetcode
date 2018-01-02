//aman kumar jha
class Solution {
public:
    int firstMissingPositive(vector<int>& nums)
    {
        set<int> st;
        for(int i=0;i<nums.size();i++)
            st.insert(nums[i]);

        int x=1;
        while(st.find(x)!=st.end())
            x++;
        return x;

    }
};
