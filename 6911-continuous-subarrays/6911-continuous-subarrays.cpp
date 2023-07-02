class Solution {
public:
    struct compare
    {
        bool operator()(pair<int,int> p1,pair<int,int> p2)
        {
            if(p1.first==p2.first)
            {
                return p1.second>p2.second;
            }
            return p1.first<p2.first;
        }
    };
    struct compare2
    {
        bool operator()(pair<int,int> &p1,pair<int,int> &p2)
        {
            if(p1.first==p2.first)
            {
                return p1.second>p2.second;
            }
            return p1.first>p2.first;
        }
    };
    long long continuousSubarrays(vector<int>& nums) {
        long long ans=0;
        long long n=nums.size();
        long long i=0;
        long long j=0;
        int mn=nums[i];
        int mx=nums[j];
        priority_queue<pair<int,int>,vector<pair<int,int>>,compare> pq;
        priority_queue<pair<int,int>,vector<pair<int,int>>,compare2> pq2;
        map<int,int> mpp;
        while(j<n)
        {
            mn=min(mn,nums[j]);
            mx=max(mx,nums[j]);
            pq.push({nums[j],j});
            pq2.push({nums[j],j});
            if((mx-mn)<=2)
            {
                // cout<<i<<" "<<j<<"\n";
                ans=ans+(j-i+1);
            }
            else
            {
                while(i<=j && (mx-mn)>2)
                {
                    if(pq2.top().first==nums[i])
                    {
                        pq2.pop();
                        while(!pq2.empty() && mpp[pq2.top().second]!=0)
                        {
                            pq2.pop();
                        }
                        mn=pq2.top().first;
                    }
                    if(pq.top().first==nums[i])
                    {
                        pq.pop();
                        while(!pq.empty() && mpp[pq.top().second]!=0)
                        {
                            pq.pop();   
                        }
                        mx=pq.top().first;
                    }
                    mpp[i]++;
                    i++;
                }
                // cout<<i<<" "<<j<<" "<<mn<<" "<<mx<<"\n";
                if((mx-mn)<=2)
                    ans=ans+(j-i+1);
            }
            j++;
        }
        return max(ans,n);
    }
};