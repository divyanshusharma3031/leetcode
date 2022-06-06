class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> l(n,0);
        l[0]=height[0];
        int mx=height[0];
        for(int i=1;i<n;i++)
        {
            l[i]=max(mx,height[i]);
            mx=max(mx,height[i]);
        }
        vector<int> r(n,0);
        r[n-1]=height[n-1];
        mx=height[n-1];
        for(int i=n-2;i>=0;i--)
        {
            r[i]=max(mx,height[i]);
            mx=max(mx,height[i]);
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans=ans+min(r[i],l[i])-height[i];
        }
        return ans;
    }
};