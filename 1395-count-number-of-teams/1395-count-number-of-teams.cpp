class Solution {
public:
    int numTeams(vector<int>& rating) {
        int i=0;
        
        vector<int> arr=rating;        

        int n=rating.size();
        
        int ans=0;
        
        vector<int> g(n,0);
        
        vector<int> l(n,0);
        
        for(int i=0;i<n;i++)
        {
            int ele=arr[i];
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]>ele)
                {
                    g[i]++;
                }
            }
        }
        
        for(int i=0;i<n;i++)
        {
            int ele=arr[i];
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]<ele)
                {
                    l[i]++;
                }
            }
        }
        
        for(int i=0;i<n;i++)
        {
            int ele=arr[i];
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]>ele)
                {
                    ans+=g[j];
                }
            }
        }
        
        // for(int i=0;i<n;i++)
        // {
        //     cout<<l[i]<<" "<<g[i]<<"\n";
        // }
        
        for(int i=0;i<n;i++)
        {
            int ele=arr[i];
            
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]<ele)
                {
                    ans+=l[j];
                }
            }
        }
        return ans;
    }
};