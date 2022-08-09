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
            matrix.push_back(v);
        }
        for(int i=0;i<matrix.size();i++)
        {
            bool b1=true;
            for(int j=0;j<matrix[i].size()-1;j++)
            {
                if(matrix[i][j]>=matrix[i][j+1])
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