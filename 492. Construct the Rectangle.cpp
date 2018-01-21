//aman kumar jha
class Solution {
public:
    vector<int> constructRectangle(int area)
    {
        int fl,fw,mindiff=INT_MAX;
        for(int w=1;w<=area;w++)
        {
            int l=area/w;
            if(mindiff>abs(l-w)&&l*w==area)
            {
                mindiff=abs(l-w);
                fl=l;fw=w;
            }
        }
        vector<int> ans;
        ans.push_back(fl);
        ans.push_back(fw);
        return ans;
    }
};
