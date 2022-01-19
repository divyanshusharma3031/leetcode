class Solution {
public:
    bool isvalid(vector<int> arr,int mid,int m,int k)
    {
        int x=0;
        int c=0;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            if(mid>=arr[i])
            {
                x++;
                if(x==k)
                {
                    x=0;
                    c++;
                }
            }
            else
            {
                x=0;
            }
        }
        if(c>=m)
        {
            return true;
        }
        return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        if(m*k>n)
        {
            return -1;
        }
        int start=1;
        int end=-1;
        for(int i=0;i<n;i++)
        {
            end=max(end,bloomDay[i]);
        }
        int res=-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(isvalid(bloomDay,mid,m,k))
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