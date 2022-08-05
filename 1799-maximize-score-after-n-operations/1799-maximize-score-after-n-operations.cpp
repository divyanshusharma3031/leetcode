class Solution {
public:
    int res=-1;
    void dfs(int i,int j,int cur,vector<vector<int>> &D,vector<bool> &vis)
    {
        if(i==0)
        {
            res=max(res,cur);
            return;
        }
        for(;j<D.size();j++)
        {
            vector<int> v=D[j];
            if(vis[v[1]] || vis[v[2]])
            {
                continue;
            }
            int ii=i*(i+1)/2;
            int val=ii*v[0]+cur;
            if(val<=res)
            {
                continue;
            }
            vis[v[1]]=vis[v[2]]=1;
            dfs(i-1,j+1,cur+i*v[0],D,vis);
            vis[v[1]]=vis[v[2]]=0;
        }
    }
    int maxScore(vector<int>& nums) {
        vector<vector<int>> g;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                g.push_back({__gcd(nums[i],nums[j]),i,j});
            }
        }
        sort(g.begin(),g.end());
        reverse(g.begin(),g.end());
        vector<bool> vis(n,0);
        dfs(n/2,0,0,g,vis);
        return res;
    }
};