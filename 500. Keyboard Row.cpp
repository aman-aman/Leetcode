//aman kumar jha
class Solution {
public:
    vector<string> findWords(vector<string>& words)
    {
        map<char,int>mp;
        vector<string> res;
        mp['q']=0;mp['w']=0;mp['e']=0;mp['r']=0;mp['t']=0;mp['y']=0;mp['u']=0;mp['i']=0;mp['o']=0;mp['p']=0;
        mp['a']=1;mp['s']=1;mp['d']=1;mp['f']=1;mp['g']=1;mp['h']=1;mp['j']=1;mp['k']=1;mp['l']=1;
        mp['z']=2;mp['x']=2;mp['c']=2;mp['v']=2;mp['b']=2;mp['n']=2;mp['m']=2;
        //for(auto x:mp)cout<<x.first<<" "<<x.second<<"\n";

        for(int i=0;i<words.size();i++)
        {
            int flag=1;
            for(int j=1;j<words[i].size();j++)
            {
                if(mp[tolower(words[i][j])]!=mp[tolower(words[i][j-1])])
                {
                    flag=-1;
                    break;
                }

            }
            if(flag==1)
            {
                res.push_back(words[i]);
                //cout<<"ok\n";
            }
        }
        return res;
    }
};
