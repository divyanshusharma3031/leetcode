class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_map<int,int> mpp1;
        unordered_map<int,int> mpp2;
        set<int> ans;
        int l=nums1.size();
        int m=nums2.size();
        int n=nums3.size();
        for(int i=0;i<l;i++)
        {
            mpp1[nums1[i]]++;
        }
        for(int i=0;i<m;i++)
        {
            if(mpp1[nums2[i]])
            {
                ans.insert(nums2[i]);
            }
            mpp2[nums2[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(mpp1[nums3[i]] || mpp2[nums3[i]])
            {
                ans.insert(nums3[i]);
            }
        }
        vector<int> a;
        for(auto it:ans)
        {
            a.push_back(it);
        }
        return a;
    }
};