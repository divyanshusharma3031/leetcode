class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int s=0;
        int k=minutes;
        int n=customers.size();
        vector<int> suff(n,0);
        if(grumpy[n-1]==0)
        {
            suff[n-1]=customers[n-1];
        }
        for(int i=n-2;i>=0;i--)
        {
            if(grumpy[i]==0)
            {
                suff[i]=suff[i+1]+customers[i];
            }
            else
            {
                suff[i]=suff[i+1];
            }
        }
        for(int i=0;i<k;i++)
        {
            s+=customers[i];
        }
        if((k)>=n)
        {
            return s;
        }
        int mx=s+suff[k];
        
        // cout<<mx<<"\n";
        int i=k;
        int j=0;
        while(i<n)
        {
            if(grumpy[j]==1)
            {
                s-=customers[j];
            }
            j++;
            s+=customers[i];
            mx=max(mx,s);
            if((i+1)<n)
            {
                mx=max(mx,s+suff[i+1]);
            }
            i++;
        }
        return mx;
    }
};