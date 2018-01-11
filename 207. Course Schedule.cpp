//aman kumar jha
class Solution {
public:

    bool dfs(int i,vector<int> &visited,vector<vector<int> > &adj)
    {
        if(visited[i]==1)
            return false;
        else
            visited[i]=1;
        for(auto x:adj[i])
        {
            if(!dfs(x,visited,adj))
                return false;
        }
        visited[i]=2;
        return true;
    }
    bool canFinish(int n, vector<pair<int, int>>& pre)
    {
         vector<vector<int> > adj(n);
         vector<int> visited(n,0);
        for(auto x:pre)
        {
            int u=x.first;
            int v=x.second;
            adj[v].push_back(u);
        }
        for(int i=0;i<n;i++)
        {
            if(!dfs(i,visited,adj))
                return false;
        }
        return true;
    }
};
