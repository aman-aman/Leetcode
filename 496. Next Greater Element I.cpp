//aman kumar jha
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2)
    {
        vector<int> ans;
        if(nums1.size()==0||nums2.size()==0)
            return ans;

        stack<int> st;
        st.push(0);
        vector<int> nge(nums2.size());
        for(int i=1;i<nums2.size();i++)
        {
            while(!st.empty()&&nums2[st.top()]<nums2[i])
            {
                nge[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty())
        {
            nge[st.top()]=-1;
            st.pop();
        }
        map<int,int> mp;

        for(int i=0;i<nge.size();i++)
        {
            if(nge[i]==-1)
                mp[nums2[i]]=-1;

            else
                mp[nums2[i]]=nums2[nge[i]];

        }
        for(int i=0;i<nums1.size();i++)
            ans.push_back(mp[nums1[i]]);
        return ans;
    }
};
