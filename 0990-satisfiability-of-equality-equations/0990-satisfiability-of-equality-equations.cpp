class Solution {
public:
    void dfs(int node,vector<int> adj[],vector<int> &vis,vector<int> &color,int c)
    {
        if(vis[node])
        {
            return;
        }
        vis[node]=1;
        color[node]=c;
        for(auto it:adj[node])
        {
            dfs(it,adj,vis,color,c);
        }
    }
    bool equationsPossible(vector<string>& equations) {
        vector<int> adj[26];
        
        int n=equations.size();
        for(int i=0;i<n;i++)
        {
            if(equations[i][1]=='=')
            {
                adj[equations[i][0]-'a'].push_back(equations[i][3]-'a');
                adj[equations[i][3]-'a'].push_back(equations[i][0]-'a');
            }
        }
        vector<int> vis(26,0);
        vector<int> color(26,0);
        int c=0;
        for(int i=0;i<26;i++)
        {
            if(!vis[i])
            {
                dfs(i,adj,vis,color,c);
                c++;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(equations[i][1]=='!')
            {
                if(color[equations[i][0]-'a']==color[equations[i][3]-'a'])
                {
                    return false;
                }
            }
        }
        return true;
    }
};