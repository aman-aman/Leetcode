//aman kumar jha
class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b)
    {
        int i=0,j=0,n=a.size(),m=b.size();
        vector<double> res;
        while(i<n&&j<m)
        {
            if(a[i]<b[j])
            {res.push_back(a[i]);i++;}
            else
            {res.push_back(b[j]);j++;}
        }
        while(i<n)
        {
            res.push_back(a[i]);i++;
        }
        while(j<m)
        {
            res.push_back(b[j]);j++;
        }
        if(res.size()%2==1)
            return res[res.size()/2];
        else
        {
            return (res[res.size()/2-1]+res[res.size()/2])/2;
        }

    }
};
