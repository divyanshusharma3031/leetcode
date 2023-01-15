class Solution {
public:
    int helper(int n, vector<int> edges[], vector<bool>& hasApple,int cv,bool* visited) 
{
    visited[cv]=true;
    int ans=0;
    // for(int i=0;i<es;i++)
    // {
    //     if(edges[i][0]==cv && !visited[edges[i][1]])
    //     {
    //         int temp=helper(n,edges, hasApple,edges[i][1],visited);
    //         if(temp!=-1){ans+=2+temp;}
    //     }
    //     if(edges[i][1]==cv && !visited[edges[i][0]])
    //     {
    //         int temp=helper(n,edges, hasApple,edges[i][0],visited);
    //         if(temp!=-1){ans+=2+temp;}
    //     }
    // }
        for(auto it:edges[cv])
        {
            if(!visited[it])
            {
                int temp=helper(n,edges,hasApple,it,visited);
                if(temp!=-1)
                {
                    ans=ans+2+temp;
                }
            }
        }
    if(ans==0)
    {
        if(hasApple[cv])
        {return 0;}
        if(cv==0){return 0;}
        return -1;
    }
    return ans;
}
int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) 
{
    bool visited[n];
    memset(visited,false,sizeof(visited));
    vector<int> adj[n+1];
    for(int i=0;i<edges.size();i++)
    {
        adj[edges[i][0]].push_back(edges[i][1]);
        adj[edges[i][1]].push_back(edges[i][0]);
    }
    return helper(n,adj,hasApple,0,visited);
}
};