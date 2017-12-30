//aman kumar jha
class Solution {
public:
    void moveZeroes(vector<int>& a)
    {
        for(int i=0;i<a.size()-1;i++)
        {
            if(a[i]==0)
            {
                for(int j=i+1;j<a.size();j++)
                {
                    if(a[j]!=0)
                    {
                        swap(a[i],a[j]);
                        break;
                    }
                }
            }
        }
    }
};
