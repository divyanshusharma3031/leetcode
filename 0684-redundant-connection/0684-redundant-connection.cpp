class Solution {
public:
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
                if(par[x]==x)
                {
                    return x;
                }
                return par[x]=parent(par[x]);
            }
     };
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        vector<int> ans(2,0);
        int n=edges.size();
        DSU d;
        for(int i=1;i<=n;i++)
        {
            d.par[i]=i;
        }
        for(auto it:edges)
        {
            if(d.Union(it[0],it[1]))
            {
                //ok hai
            }
            else
            {
                ans[0]=it[0];
                ans[1]=it[1];
            }
        }
        return ans;
    }
};