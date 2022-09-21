class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int evensum=0;
        map<int,int> mpp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]%2)
            {
                
            }
            else
            {
                mpp.insert({i,nums[i]});
                evensum+=nums[i];
            }
        }
        vector<int> ans;
        for(auto it:queries)
        {
            int idx=it[1];
            if(nums[idx]%2)
            {
                nums[idx]=nums[idx]+it[0];
                if(nums[idx]%2)
                {
                    
                }
                else
                {
                    evensum+=nums[idx];
                    mpp[idx]=nums[idx];
                }
            }
            else
            {
                int temp=nums[idx];
                nums[idx]=nums[idx]+it[0];
                if(nums[idx]%2==0)
                {
                    evensum=evensum+it[0];
                }
                else
                {
                    evensum=evensum-temp;
                }
            }
            ans.push_back(evensum);
        }
        return ans;
    }
};