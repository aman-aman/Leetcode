//aman kumar jha
class Solution {
public:
    int numJewelsInStones(string J, string S)
    {
        int s=0;
        for(int i=0;i<J.length();i++)
        {
            s+=count(S.begin(),S.end(),J[i]);
        }
        return s;
    }
};
