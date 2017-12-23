//aman kumar jha

class Solution {
public:
    int maxarea(vector<int> h)
    {
        stack<int> st;
        int i=0,maxarea=0,tp,area=0,n=h.size();
        while(i<n)
        {
            if(st.empty()||h[st.top()]<=h[i])
            {
                st.push(i++);
            }
            else
            {
                tp=st.top();
                st.pop();
                area=h[tp]*(st.empty()?i:i-st.top()-1);
                maxarea=max(area,maxarea);
            }
        }
        while (st.empty() == false)
        {
            tp=st.top();
            st.pop();
            area=h[tp]*(st.empty()?i:i-st.top()-1);
            maxarea=max(maxarea,area);
        }

        return maxarea;
    }

    int largestRectangleArea(vector<int>& h)
    {
        int area= maxarea(h);
        return area;
    }
};
