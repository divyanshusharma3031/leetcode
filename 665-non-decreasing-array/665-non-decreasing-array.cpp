class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        vector<int> p;
        int n=nums.size();
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]<=nums[i+1])
            {
                
            }
            else
            {
                p.push_back(i);
            }
        }
        if(p.size()==0)
        {
            return true;
        }
        if(p.size()>=2)
        {
            return false;
        }
        int idx=p[0];
        cout<<idx<<"\n";
        if(idx==0 || idx==n-2)
        {
            return true;
        }
        if( (nums[idx-1]<nums[idx+1]) || (nums[idx]<nums[idx+2]) || (nums[idx-1]==nums[idx+1]))
        {
            return true;
        }
        return false;
    }
};