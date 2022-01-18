class Solution {
public:
    bool isvalid(vector<int> arr,int n,int k,int mid)
    {
        int s=0;
        int c=1;
        for(int i=0;i<n;i++)
        {
            s+=arr[i];
            if(s>mid)
            {
                c++;
                s=arr[i];
            }
            if(c>k)
            {
                return false;
            }
        }
        return true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int start=0;
        int s=0;
        int n=weights.size();
        for(int i=0;i<n;i++)
        {
            start=max(start,weights[i]);
            s+=weights[i];
        }
        int end=s;
        int res=-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(isvalid(weights,n,days,mid))
            {
                res=mid;
                end=mid-1;
            }
            else
            {
                start=mid+1;
                cout<<start<<"\n";
            }
        }
        return res;
    }
};