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
            if(mpp[f])
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
            if(mpp[f2])
            {
               if(vis[{f2,nums[i]}] || vis[{nums[i],f2}])
                {
                    
                }
                else
                {
                    ans++;
                }
                vis[{f2,nums[i]}]++;
                vis[{nums[i],f2}]++;
            }
            mpp[nums[i]]++;
        }
        return ans;
    }
};