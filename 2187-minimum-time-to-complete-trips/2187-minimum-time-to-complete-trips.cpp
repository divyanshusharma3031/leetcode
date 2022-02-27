class Solution {
public:
    bool possible(vector<int> &time,int totalTrips,long long mid)
    {
        long long ans=0;
        for(int i=0;i<time.size();i++)
        {
            
            ans+=(mid/time[i]);
        }
        if(ans>=totalTrips)
        {
            return true;
        }
        return false;
    }
    long long minimumTime(vector<int>& time, int totalTrips) {
        sort(time.begin(),time.end());
        if(time.size()==1)
        {
            long long a=time[0];
            long long trips=totalTrips;
            return a*trips;
        }
        long long mn=time[0];
        long long mx=0;
        for(int i=0;i<time.size();i++)
        {
            mx+=time[i];
        }
        if(mx<1e7)
        {
             mx=1e7;
        }
       
        long long ans=-1;
        while(mn<=mx)
        {
            long long mid=mn+(mx-mn)/2;
            // cout<<mid<<"\n";
            if(possible(time,totalTrips,mid))
            {
                ans=mid;
                mx=mid-1;
            }
            
            else
            {
                mn=mid+1;
            }
        }
        return ans;
    }
};