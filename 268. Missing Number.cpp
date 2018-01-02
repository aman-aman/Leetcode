//aman kumar jha
class Solution {
public:
    int missingNumber(vector<int>& nums)
    {
        set<int> st;
        for(int i=0;i<nums.size();i++)
            st.insert(nums[i]);

        int x=0;
        while(st.find(x)!=st.end())
            x++;
        return x;
    }
};
