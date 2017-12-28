//aman kumar jha
class Solution {
public:
    vector<int> v,t;
    Solution(vector<int> nums)
    {
        v=nums;
        t=nums;
    }

    /** Resets the array to its original configuration and return it. */
    vector<int> reset()
    {
        return t;
    }

    /** Returns a random shuffling of the array. */
    vector<int> shuffle()
    {
        for (int i = 0;i <v.size();i++)
        {
            int pos = rand()%(v.size()-i);
            swap(v[i+pos],v[i]);
        }
        return v;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(nums);
 * vector<int> param_1 = obj.reset();
 * vector<int> param_2 = obj.shuffle();
 */
