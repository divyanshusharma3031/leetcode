class Solution {
public:
    int maximizeWin(vector<int>& prizePositions, int k) {
        map<int,int> mpp;
        for(auto it:prizePositions)
        {
            mpp[it]++;
        }
        vector<pair<int,int>> v;
        for(auto it:mpp)
        {
            v.push_back(it);
        }
        int n=v.size();
        vector<int> suff(n+2,0);
        for(int i=n-1;i>=0;i--)
        {
            int curr=v[i].first;
            int j=i;
            int s=0;
            while(j<n && (v[j].first-curr)<=k)
            {
                s=s+v[j].second;
                j++;
            }
            suff[i]=max(suff[i+1],s);
        }
        vector<int> pref(n+1,0);
        
        for(int i=0;i<n;i++)
        {
           int j=i;
            int curr=v[i].first;
            int s=0;
            while(j>=0 && (curr-v[j].first)<=k)
            {
                s=s+v[j].second;
                j--;
            }
            if(i==0)
            {
                pref[i]=s;
            }
            else
            {
                pref[i]=max(pref[i-1],s);
            }
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans=max(ans,pref[i]+suff[i+1]);
        }
        return ans;
    }
};