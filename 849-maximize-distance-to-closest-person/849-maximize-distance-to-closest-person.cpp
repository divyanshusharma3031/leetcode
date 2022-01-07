class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int x=INT_MIN+182;
        int n=seats.size();
        vector<int> l(n,0);
        vector<int> r(n,0);
        for(int i=0;i<n;i++)
        {
            if(seats[i]==0)
            {
                l[i]=x;
            }
            else
            {
                x=i;
            }
        }
        x=INT_MAX;
        for(int i=n-1;i>=0;i--)
        {
            if(seats[i]==0)
            {
                r[n-i-1]=x;
            }
            else
            {
                x=i;
            }
        }
        int ans=0;
        reverse(r.begin(),r.end());
        // for(int i=0;i<n;i++)
        // {
        //     // cout<<r[i]<<" ";
        // }
        for(int i=0;i<n;i++)
        {
            if(seats[i]==0)
                ans=max(ans,min(i-l[i],r[i]-i));
        }
        return ans;
    }
};