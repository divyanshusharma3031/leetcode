class Solution {
public:
    int minimumCardPickup(vector<int>& arr) {
        
        int i=0;
        
        int n=arr.size();
        
        int j=0;
        
        int ans=INT_MAX;
        
        map<int,int> mpp;
        
        for(int i=0;i<n;i++)
        {
            mpp[arr[i]]++;
            if(mpp[arr[i]]>1)
            {
                
                int ele=arr[i];
                
                while(j<n && arr[j]!=ele)
                {
                    mpp[arr[j]]--;
                    j++;
                }
                
                mpp[arr[j]]--;
                ans=min(ans,i-j+1);
                j++;
            }
        }
        if(ans==(INT_MAX))
        {
            return -1;
        }
        return ans;
        
    }
};