
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
class Solution {
public:
    vector<int> colorTheArray(int n, vector<vector<int>>& queries) {
        int q=queries.size();
        vector<int> ans(q,0);
        DSU d;
        for(int i=0;i<n;i++)
        {
            d.par[i]=i;
        }
        vector<int> c(n,0);
        int prevans=0;
        for(int i=0;i<q;i++)
        {
            int idx=queries[i][0];
            int color=queries[i][1];
            int idx1=queries[i][0]-1;
            int idx2=queries[i][0]+1;
            int prevcolor=c[idx];
            if(c[idx]==color)
            {
                ans[i]=prevans;
                continue;
            }
            c[idx]=color;
            if((idx-1)>=0 && c[idx]==c[idx-1])
            {
                prevans++;
            }
            if((idx+1)<n && c[idx]==c[idx+1])
            {
                prevans++;
            }
            if((idx-1)>=0 && c[idx-1]==prevcolor && prevcolor!=0)
            {
                prevans--;
            }
            if((idx+1)<n && c[idx+1]==prevcolor && prevcolor!=0)
            {
                prevans--;
            }
            ans[i]=prevans;
        }
        return ans;
    }
};