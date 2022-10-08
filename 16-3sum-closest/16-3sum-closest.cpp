class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans=INT_MAX;
        int s=0;
        for(int i=0;i<n-2;i++)
        {
            int ele=nums[i];
            int a=i+1;
            int j=n-1;
            while(a<j)
            {
                if(ans>=(abs(nums[i]+nums[j]+nums[a]-target)))
                {
                    // cout<<nums[i]<<" "<<nums[j]<<" "<<nums[a]<<"\n";
                    ans=min(ans,abs(nums[i]+nums[j]+nums[a]-target));
                    s=nums[i]+nums[j]+nums[a];
                    if((nums[i]+nums[j]+nums[a])<target)
                    {
                        a++;
                    }
                    else
                    {
                        j--;
                    }
                }
                else if((nums[i]+nums[j]+nums[a])<target)
                {
                    a++; 
                }
                else
                {
                    j--;
                }
            }
        }
        return s;
    }
};