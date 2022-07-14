class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0;
        int j=0;
        int x=0;
        vector<int> nums3(n+m,0);
        while(i<m && j<n)
        {
            if(nums1[i]<nums2[j])
            {
                nums3[x]=nums1[i];
                i++;
                x++;
            }
            else
            {
                nums3[x]=nums2[j];
                j++;
                x++;
            }
        }
        while(i<m)
        {
            nums3[x]=nums1[i];
            i++;
            x++;
        }
        while(j<n)
        {
            nums3[x]=nums2[j];
            j++;
            x++;
        }
        nums1=nums3;
    }
};