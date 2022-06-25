class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> odd;
        vector<int> even;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(i%2)
            {
                odd.push_back(nums[i]);
            }
            else
            {
                even.push_back(nums[i]);
            }
        }
        sort(odd.begin(),odd.end(),greater<int>());
        sort(even.begin(),even.end());
        int oddi=0;
        int eveni=0;
        for(int i=0;i<n;i++)
        {
            if(i%2)
            {
                nums[i]=odd[oddi];
                oddi++;
            }
            else
            {
                nums[i]=even[eveni];
                eveni++;
            }
        }
        return nums;
    }
};