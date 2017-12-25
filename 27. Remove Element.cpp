//aman kumar jha
class Solution {
public:
    int removeElement(vector<int>& a, int val)
    {
        a.erase(remove(a.begin(),a.end(),val),a.end());
        return a.size();
    }
};
