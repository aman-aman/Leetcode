//aman kumar jha
class Solution {
public:
    string getPermutation(int n, int k)
    {
        string s;
        for(int i=1;i<=n;i++)
        {
            s.push_back('0'+i);
        }
        k=k-2;
        while(next_permutation(s.begin(),s.end())&& k--){}
        //next_permutation(s.begin(),s.end());
        //cout<<s;
        return s;
    }
};
