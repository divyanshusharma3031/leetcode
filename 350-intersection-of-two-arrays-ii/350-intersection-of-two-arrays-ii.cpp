class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        map<int,int> mpp1;
        map<int,int> mpp2;
        int n=nums1.size();
        for(int i=0;i<n;i++)
        {
            mpp1[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++)
        {
            mpp2[nums2[i]]++;
        }
        for(auto it:mpp1)
        {
            int x=min(it.second,mpp2[it.first]);
            while(x)
            {
                ans.push_back(it.first);
                x--;
            }
        }
        return ans;
    }
};