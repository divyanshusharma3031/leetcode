class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        int n=nums.size();
        double avg=-1e9;
        double s=0;
        for(int i=0;i<k;i++)
        {
            s=s+nums[i];
        }
        avg=max(avg,s/k);
        int i=k;
        int j=0;
        while(i<n)
        {
            s=s-nums[j];
            s+=nums[i];
            i++;
            j++;
            avg=max(avg,s/k);
        }
        return avg;
    }
};