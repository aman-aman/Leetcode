//aman kumar jha
class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& dicts)
     {
        unordered_set<string> dict(dicts.begin(), dicts.end());
        if(dict.find(endWord) == dict.end()) return 0;
        unordered_set<string> s1, s2;
        s1.insert(beginWord);
        s2.insert(endWord);
        int ans = 1;
        while(!s1.empty() && !s2.empty())
        {
            ans++;
            if(s1.size() > s2.size()) swap(s1, s2);
            unordered_set<string> temp;
            for(auto it=s1.begin();it!=s1.end();it++)
            {
                string w = *it;
                for(int i = 0; i < w.size(); i++)
                {
                    char c = w[i];
                    for(int j=0;j<26;j++)
                    {
                        w[i]='a'+j;
                        if(s2.find(w) != s2.end())
                            return ans;
                        if(dict.find(w)!=dict.end())
                        {
                            temp.insert(w);
                            dict.erase(w);
                        }
                    }
                    w[i] = c;
                }
            }
            swap(s1, temp);
        }
        return 0;
    }

};
