class Solution {
public:
    void moveZeroes(vector<int>& arr) {
       int n=arr.size();
        if(n==1)
        {
            return;
        }
        int c=0;
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                c++;
            }
        }
        
        int j=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=0)
            {
                int x=i-1;
                while(x>=j)
                {
                    arr[x]=arr[x+1];
                    x--;
                }
                // arr[i]=0;
                j++;
            }
        }
        j=n-1;
        while(c>0)
        {
            arr[j]=0;
            j--;
            c--;
        }
    }
};