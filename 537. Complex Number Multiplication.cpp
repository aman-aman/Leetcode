class Solution {
public:
    string complexNumberMultiply(string a, string b)
    {
        stringstream ss1(a),ss2(b),ans;
        char ch;
        int ra,rb,ia,ib;
        ss1>>ra>>ch>>ia>>ch;
        ss2>>rb>>ch>>ib>>ch;
        ans<<ra*rb-ia*ib<<"+"<<ra*ib+rb*ia<<"i";
        return ans.str();
    }
};
