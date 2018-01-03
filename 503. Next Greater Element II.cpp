//aman kumar jha
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums)
    {
        vector<int> nge(nums.size(),-1);
        stack<int> st;
        st.push(0);
        int n=nums.size();
        for(int i=1;i<n*2;i++)
        {
            int large=nums[i%n];
            while(!st.empty()&&nums[st.top()]<large)
            {
                nge[st.top()]=large;
                st.pop();
            }
            if(i<n)
                st.push(i);
        }
        return nge;
    }
};
