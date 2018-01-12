//aman kumar jha
class Solution
{
public:
    int nextGreaterElement(int n)
    {
        string s=to_string(n);
        string temp=s;
        next_permutation(s.begin(),s.end());

        if(stoll(s)<0||stoll(s)>=INT_MAX||temp>=s)
            return -1;

        return stoi(s);
    }
};
