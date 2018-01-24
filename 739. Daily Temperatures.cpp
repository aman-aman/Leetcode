//aman kumar jha
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& a)
    {
        int n=a.size();
        stack<int> st;
        vector<int> nge(n,0);
        int i=0;
        while(i<n)
        {
            if(st.empty())
            {
                st.push(i);
                i++;
            }
            else
            {
             int temp=st.top();
                if(a[temp]<a[i])
                {
                    st.pop();
                    nge[temp]=i;
                }
                else
                {
                    st.push(i);
                    i++;
                }
            }
        }
        while(!st.empty())
        {
            nge[st.top()]=0;
            st.pop();
        }
        vector<int> res;
        for(int i=0;i<n;i++)
        {
            if(nge[i]!=0)
                res.push_back(nge[i]-i);
            else
                res.push_back(0);
        }
        return res;
    }
};
