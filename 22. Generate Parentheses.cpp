//aman kumar jha
class Solution {
public:
    bool ArePair(char opening,char closing)
{
	if(opening == '(' && closing == ')') return true;
	return false;
}
    bool isbalanced(string exp)
    {
        stack<char>  S;
        for(int i =0;i<exp.length();i++)
        {
            if(exp[i] == '(')
                S.push(exp[i]);
            else if(exp[i] == ')')
            {
                if(S.empty() || !ArePair(S.top(),exp[i]))
                    return false;
                else
                    S.pop();
            }
        }
        return S.empty() ? true:false;
    }
    vector<string> generateParenthesis(int n)
    {
        vector<string> vec;
        string s;
        for(int i=0;i<n;i++)
        {
            s.push_back('(');
            s.push_back(')');
        }
        sort(s.begin(),s.end());
        do
        {
            if(isbalanced(s))
                vec.push_back(s);
        }while(next_permutation(s.begin(),s.end()));
        return vec;

    }
};
