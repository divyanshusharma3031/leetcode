class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        int previ=0;
        int c=0;
        while(i<n)
        {
            
            int ele=nums[i];
            nums[previ]=ele;
            c++;
            int j=i+1;
            while(j<n && ele==nums[j])
            {
                j++;
            }
            i=j;
            previ++;
        }
        return c;
    }
};