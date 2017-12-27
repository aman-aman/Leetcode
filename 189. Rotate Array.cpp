class Solution {
public:
    void rotate(vector<int>& a, int k)
    {
        int n=a.size();
        if ((n == 0) || (k <= 0))
            {
                return;
            }

            vector<int>nums(n);
            for (int i = 0; i < n; i++)
            {
                nums[i] =a[i];
            }

            for (int i = 0; i < n; i++)
            {
                a[(i + k)%n] = nums[i];
            }
    }
};
