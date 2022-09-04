class Solution {
public:
    int movesToMakeZigzag(vector<int>& arr) {
        int p1=0;
        int p2=0;
        int n=arr.size();
        if(n<=1)
            return 0;
        for(int i=1;i<n;i+=2)
        {
            if(i==n-1)
            {
                if (arr[i - 1] <= arr[i]) p1 += arr[i] - arr[i - 1] + 1;
            }
            else
            {
                int x=min(arr[i-1],arr[i+1]);
                int a=0;
                if(arr[i]>=x)
                {
                    a=arr[i]-x+1;
                }
                p1=p1+a;
            }
        }
        for(int i=0;i<n;i+=2)
        {
            if(i==0)
            {
                if(arr[i]>=arr[i+1])
                {
                    p2=p2+(arr[i]-arr[i+1]+1);
                }
            }
            else if(i==(n-1))
            {
                if(arr[i-1]<=arr[i])
                {
                    p2=p2+(arr[i]-arr[i-1])+1;
                }
            }
            else
            {
                if(arr[i-1]<=arr[i] || arr[i]>=arr[i+1])
                {
                    p2=p2+arr[i]-min(arr[i-1],arr[i+1])+1;
                }
            }
        }
        return min(p1,p2);
    }
};