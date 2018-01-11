//aman kumar jha
class Solution {
public:
    bool repeatedSubstringPattern(string s)
    {
       string str;
        str+=s;
        str+=s;
        return str.substr(1,str.length()-2).find(s)!=-1;
    }
};
