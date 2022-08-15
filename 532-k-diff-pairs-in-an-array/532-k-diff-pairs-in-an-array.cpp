class Solution {
public:
    typedef pair<int,int> pi;
    int findPairs(vector<int>& nums, int k) {
        map<int,int> mpp;
        int n=nums.size();
        int ans=0;
        map<pi,int> vis;
        for(int i=0;i<n;i++)
        {
            int f=nums[i]-k;
            int f2=nums[i]+k;
            if(f==f2)
            {
                if(mpp[f2])
                {
                    if(vis[{f,nums[i]}] || vis[{nums[i],f}])
                    {

                    }
                    else
                    {
                        ans++;
                    }
                    vis[{f,nums[i]}]++;
                    vis[{nums[i],f}]++;
                }
            }
            else if(mpp[f])
            {
                if(vis[{f,nums[i]}] || vis[{nums[i],f}])
                {
                    
                }
                else
                {
                    // cout<<f<<" "<<nums[i]<<"\n";
                    ans++;
                }
                vis[{f,nums[i]}]++;
                vis[{nums[i],f}]++;
            }
            if(mpp[f2])
            {
               if(vis[{f2,nums[i]}] || vis[{nums[i],f2}])
                {
                    
                }
                else
                {
                    // cout<<f2<<" "<<nums[i]<<"\n";
                    ans++;
                }
                vis[{f2,nums[i]}]++;
                vis[{nums[i],f2}]++;
            }
            // cout<<f<<" "<<f2<<" "<<ans<<"\n";
            mpp[nums[i]]++;
        }
        return ans;
    }
};