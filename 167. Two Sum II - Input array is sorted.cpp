//aman kumar jha
class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target)
    {
        int l=0,r=a.size()-1;
        vector<int> res;
        while(l<r)
        {
             if(a[l]+a[r]==target)
             {
                 res.push_back(l+1);res.push_back(r+1);
                 return res;
             }
             else if(a[l]+a[r]<target)
                  l++;
             else
                  r--;
            }
        }
};
