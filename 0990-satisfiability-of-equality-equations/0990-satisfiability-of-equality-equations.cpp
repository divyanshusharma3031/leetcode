class Solution {
public:
    void dfs(int i,vector<int> adj[],vector<int> &vis,vector<int> &color,int c)
    {
        if(vis[i])
        {
            return;
        }
        vis[i]=true;
        color[i]=c;
        for(auto it:adj[i])
        {
            if(!vis[it])
            {
                dfs(it,adj,vis,color,c);
            }
        }
    }
    bool equationsPossible(vector<string>& equations) {
        vector<int> adj[27];
        for(auto it:equations)
        {
            if(it[1]=='=')
            {
                adj[it[0]-'a'].push_back(it[3]-'a');
                adj[it[3]-'a'].push_back(it[0]-'a');
            }
        }
        vector<int> vis(26,0);
        vector<int> color(27,0);
        int c=1;
        for(int i=0;i<26;i++)
        {
            if(!vis[i])
            {
                dfs(i,adj,vis,color,c);
                c++;
            }
        }
        for(auto it:equations)
        {
            if(it[1]=='!')
            {
                if(color[it[0]-'a']==color[it[3]-'a'])
                {
                    return false;
                }
            }
        }
        return true;
    }
};