//aman kumar jha
class Solution {
public:
    bool searchMatrix(vector<vector<int> >& a, int key)
    {
        int n=a.size();
        if(n==0)
            return false;

        int m=a[0].size();
        int i=0,j=m-1;
		while(i<n&&j>=0)
		{
			if(key==a[i][j])
			{
				return true;
			}
			if(key<a[i][j])
			{
				j=j-1;
			}
			else
			{
				i=i+1;
			}
		}
        return false;

    }
};
