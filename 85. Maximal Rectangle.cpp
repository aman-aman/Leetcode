//aman kumar jha
class Solution {
public:
    int maxarea(int h[],int n)
    {
        stack<int> st;
        int i=0,maxarea=0,tp,area=0;
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
    int maximalRectangle(vector<vector<char> >& mat)
    {
        if(mat.empty())
            return 0;

        int n=mat.size();
        int m=mat[0].size();


        int ma[n][m];

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                ma[i][j]=mat[i][j]-48;
            }
        }
        int area=maxarea(ma[0],m);
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(ma[i][j]==1)
                    ma[i][j]=ma[i][j]+ma[i-1][j];
            }
            area=max(area,maxarea(ma[i],m));
        }
        return area;

    }
};
