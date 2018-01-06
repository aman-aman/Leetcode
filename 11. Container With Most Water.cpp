//aman kumar jha
class Solution {
public:
    int maxArea(vector<int>& a)
    {
        int l=0,h=a.size()-1;
        int ans=INT_MIN;
       while(l<h)
       {
           int height=min(a[l],a[h]);
           ans=max(ans,height*(h-l));
           if(height==a[l])
               l++;
           else
               h--;
       }
        return ans;
    }
};
