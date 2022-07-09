class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        vector<long long> v;
        int tm=k1+k2;
        int n=nums1.size();
        map<long long,long long> mpp;
        for(int i=0;i<n;i++)
        {
            v.push_back(abs(nums1[i]-nums2[i]));
            mpp[v[i]]++;
        }
        long long su=0;
        for(int i=0;i<n;i++)
        {
            su+=v[i];
        }
        if(tm>=su)
        {
            return 0;
        }
        while(tm>0)
        {
            pair<int,int> p=*mpp.rbegin();
            if(p.second<tm)
            {
                mpp[p.first-1]+=p.second;
                mpp.erase(p.first);
                tm-=p.second;
            }
            else if(p.second>=tm)
            {
                mpp[p.first] -= tm;
					mpp[p.first-1] += tm;
					break;
            }
        }
        long long s=0;
        for(auto i:mpp)
        {
            s=s+(i.first*i.first)*(i.second);
        }
        return s;
    }
};