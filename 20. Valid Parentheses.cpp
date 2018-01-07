//aman kumar jha
class Solution {
public:

    bool isValid(string s)
    {
       map<char, char> parenth_dict;
            parenth_dict['('] = ')';
            parenth_dict['{'] = '}';
            parenth_dict['['] = ']';

            stack<char> aux;
            for (int i = 0; i < s.size(); i++) {
                if (s[i] == '(' || s[i] == '{' || s[i] == '[')
                    aux.push(s[i]);
                else if (aux.empty() || parenth_dict[aux.top()] != s[i])
                    return false;
                else
                    aux.pop();
            }

            return aux.empty();
    }
};
