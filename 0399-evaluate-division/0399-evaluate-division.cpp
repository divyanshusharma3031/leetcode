class Solution {
public:
    typedef pair<int,double> pid;
    bool dfs(string source,string destination,double curr,map<string,vector<string>> &adj,map<string,double> mpp,map<string,int> &vis,double &ans)
    {
        // cout<<source<<" "<<curr<<"\n";
        if(source==destination)
        {
            ans=curr;
            return true;
        }
        if(ans!=-1)
        {
            return true;
        }
        vis[source]=1;
        for(auto it:adj[source])
        {
            if(!vis[it])
                if(dfs(it,destination,curr*mpp[source+"_"+it],adj,mpp,vis,ans))
                {
                    return true;
                }
        }
        return false;
    }
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        vector<double> ans; 
        map<string,double> mp;
        map<string,vector<string>> graph;
        for(int i=0;i<equations.size();i++)
        {
           mp[equations[i][0]+"_"+equations[i][1]]=values[i];
           mp[equations[i][1]+"_"+equations[i][0]]=1.0/values[i];
           graph[equations[i][0]].push_back(equations[i][1]);
           graph[equations[i][1]].push_back(equations[i][0]);
        }
        for(auto it:queries)
        {
            double curr=1;
            double value=-1;
            if(graph.find(it[0])==graph.end() || graph.find(it[1])==graph.end())
            {
                ans.push_back(-1.0);
                continue;
            }
            map<string,int> vis;
            dfs(it[0],it[1],curr,graph,mp,vis,value);
            ans.push_back(value);
        }
        return ans;
    }
};