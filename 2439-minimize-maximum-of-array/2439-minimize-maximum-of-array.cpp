class Solution {
public:
    bool check(long long mid,vector<int> &arr)
    {
        long long contribution=0;
        if(arr[0]<=mid)
        {
            contribution=contribution+mid-arr[0];
        }
        else
        {
            return false;
        }
        int n=arr.size();
        for(int i=1;i<n;i++)
        {
            if(arr[i]<mid)
            {
                long long x=arr[i];
                contribution=contribution+mid-x;
            }
            else if(arr[i]==mid)
            {
                //skip
            }
            else
            {
                long long x=arr[i];
                long long req=x-mid;
                // cout<<arr[i]<<" "<<req<<" "<<contribution<<"\n";
                if(req>contribution)
                {
                    return false;
                }
                contribution=contribution-req;
            }
        }
        return true;
    }
    int minimizeArrayValue(vector<int>& arr) {
        int mx=0;
        for(int i=0;i<arr.size();i+=1)
        {
            mx=max(arr[i],mx);
        }
        int lo=0;
        int hi=mx;
        int ans=mx;
        while(lo<=hi)
        {
            int mid=(lo+hi)/2;
            if(check(mid,arr))
            {
                ans=mid;
                hi=mid-1;
            }
            else
            {
                lo=mid+1;
            }
        }
        return ans;
    }
};