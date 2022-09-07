class DSU
{
    vector<int> parent,rank;
    public:
        DSU(int n)
        {
            parent.resize(n,0);
            for(int i=0;i<n;i++)
            {
                parent[i]=i;
            }
            rank.resize(n,1);
        }
        int Rank(int node)
        {
            return rank[par(node)];
        }
        int par(int x)
        {
            if(parent[x]==x)
            {
                return x;
            }
            return parent[x]=par(parent[x]);
        }
        void Union(int x,int y)
        {
            x=parent[x];
            y=parent[y];
            if(x==y)
            {
                return;
            }
            if(rank[x]<rank[y])
            {
                swap(x,y);
            }
            rank[x]+=rank[y];
            parent[y]=x;
        }
};
class Solution {
public:
    unordered_map<int,int> mpp ;
    int findLatestStep(vector<int>& arr, int m) {
        DSU d(arr.size()+2);
        string s(arr.size()+2,'0');
        int itr=-1;
        int par=1;
        for(auto &x:arr)
        {
            s[x]='1';
            int og=d.Rank(x);
            ++mpp[og];
            if(s[x+1]=='1')
            {
                --mpp[d.Rank(x)];
                --mpp[d.Rank(x+1)];
                ++mpp[d.Rank(x)+d.Rank(x+1)];
                d.Union(x,x+1);
            }
            if(s[x-1]=='1')
            {
                --mpp[d.Rank(x)];
                --mpp[d.Rank(x-1)];
                ++mpp[d.Rank(x)+d.Rank(x-1)];
                d.Union(x,x-1);
            }
            // cout<<mpp[m]<<"\n";
            if(mpp[m])
            {
                itr=par;
            }
            par++;
        }
        return itr;
    }
};