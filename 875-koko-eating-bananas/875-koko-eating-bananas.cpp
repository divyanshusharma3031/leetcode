class Solution {
public:
    bool isvalid(vector<int> arr,int mid,int h)
    {
        int c=0;
        int mx=0;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            c+=arr[i]/mid;
            if(arr[i]%mid!=0)
            {
                c++;
            }
        }
        if(c<=h)
        {
            return true;
        }
        return false;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int start=0;
        int end=0;
        int n=piles.size();
        for(int i=0;i<n;i++)
        {
            start=max(start,piles[i]);
        }
        end=start;
        start=1;
        int res=-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(isvalid(piles,mid,h))
            {
                res=mid;
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        return res;
    }
};