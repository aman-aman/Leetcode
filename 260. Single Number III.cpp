//aman kumar jha
class Solution {
public:
    vector<int> singleNumber(vector<int>& a)
    {
        int n=a.size();
        int xorval=a[0];
        for(int i=1;i<n;i++)
            xorval=xorval^a[i];

       int right=xorval&~(xorval-1);
        int x=0,y=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]&right)
                x=x^a[i];
            else
                y=y^a[i];
        }
        vector<int> res;
        res.push_back(x);
        res.push_back(y);
        return res;
    }
};
