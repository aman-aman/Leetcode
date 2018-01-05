//aman kumar jha
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x)
    {
        auto comp=[&](int a,int b){ return abs(x-a)<abs(x-b)||abs(x-a)==abs(x-b)&&a<b;};
        sort(arr.begin(),arr.end(),comp);
        vector<int> vec;
        for(int i=0;i<k;i++)
            vec.push_back(arr[i]);

        sort(vec.begin(),vec.end());
        return vec;

    }
};
