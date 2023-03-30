class Solution {
public:
    int req=-1;
    class DSU
     {
         public:
            unordered_map<int,int> par;
            unordered_map<int,int> rank;
            bool Union(int x,int y)
            {
                if(parent(x)==parent(y))
                {
                    return false;
                }
                int par1=parent(x);
                int par2=parent(y);
                if(rank[par1]>rank[par2])
                {
                    par[par2]=par1;
                    rank[par1]+=rank[par2];
                }
                else
                {
                    par[par1]=par2;
                    rank[par2]=rank[par2]+rank[par1];
                }
                return true;
            }
            int parent(int x)
            {
                // cout<<x<<" ";
                if(par[x]==x)
                {
                    return x;
                }
                return par[x]=parent(par[x]);
            }
     };
    vector<int> findRedundantDirectedConnection(vector<vector<int>>& edges) {
        vector<int> ans(2,0);
        int n=edges.size();
        DSU d;
        vector<int> indegree(n+1,-1);
        vector<int> adj[n+1];
        vector<int> vis(n+1,0);
        for(int i=0;i<n;i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
        }
        int e1=-1;
        int e2=-1;
        for(int i=0;i<n;i+=1)
        {
            if(indegree[edges[i][1]]!=(-1))
            {
                e1=indegree[edges[i][1]];//1st edge causing indegree >1
                e2=i;//2nd edge causing indegree >1
                break;
            }
            indegree[edges[i][1]]=i;
        }
        for(int i=1;i<=n;i++)
        {
            d.par[i]=i;
        }
        for(int i=0;i<n;i++)
        {
            if(i==e2)
            {
                continue;
            }
            auto it=edges[i];
            if(d.Union(it[0],it[1]))
            {
                //ok hai
            }
            else
            {
                //cycle is present
                if(e1!=-1)
                {
                    //>1 indegree present remove it;
                    return edges[e1];
                }
                else
                {
                    return edges[i];
                }
            }
        }
        //No cycle is present  
        return edges[e2];
    }
};