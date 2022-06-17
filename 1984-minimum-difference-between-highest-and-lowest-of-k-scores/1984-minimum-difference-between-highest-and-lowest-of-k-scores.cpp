class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if(nums.size()==1)
        {
            return 0;
        }
        vector<int> arr=nums;
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int j=0;
        int mx=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if((i-j+1)==k)
            {
                mx=min(mx,arr[i]-arr[j]);
            }
            else if((i-j+1)>k)
            {
                j++;
                mx=min(mx,arr[i]-arr[j]);
            }
        }
        return mx;
        
    }
};