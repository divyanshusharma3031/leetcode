class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> matrix;
        for(int i=0;i<n;i++)
        {
            bool b1=true;
            vector<int> v;
            for(int j=0;j<n;j++)
            {
                if(i==j)
                {
                    continue;
                }
                else
                {
                    v.push_back(nums[j]);
                }
            }
            for(int j=0;j<v.size()-1;j++)
            {
                if(v[j]>=v[j+1])
                {
                    b1=false;
                }
            }
            if(b1)
            {
                return true;
            }
        }
        return false;
    }
};