class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        vector<int> l(n,0);
        vector<int> r(n,0);
        l[0]=1;
        for(int i=1;i<n;i++)
        {
            l[i]=nums[i]>nums[i-1];
        }
        r[n-1]=1;
        for(int i=n-2;i>=0;i--)
        {
            r[i]=nums[i]>nums[i+1];
        }
        int idx=-1;
        for(int i=0;i<n;i++)
        {
            if(l[i]==1 && r[i]==1)
            {
                return i;
            }
        }
        return idx;
    }
};