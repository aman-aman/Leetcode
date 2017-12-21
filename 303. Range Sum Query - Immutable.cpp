//aman kumar jha
class NumArray {
public:

    NumArray(vector<int> a) :dp(a.size()+1,0)
    {
        partial_sum( a.begin(),a.end(),dp.begin()+1);
    }

    int sumRange(int i, int j)
    {
        return dp[j+1]-dp[i];

    }
    private:
        vector<int> dp;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(i,j);
 */
