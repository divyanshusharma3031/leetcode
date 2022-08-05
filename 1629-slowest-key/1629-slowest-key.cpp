class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int n=releaseTimes.size();
        char ans=keysPressed[0];
        int d=releaseTimes[0];
        for(int i=1;i<n;i++)
        {
            int nd=releaseTimes[i]-releaseTimes[i-1];
            if(nd>d)
            {
                ans=keysPressed[i];
                d=nd;
            }
            else if(nd==d)
            {
                ans=max(ans,keysPressed[i]);
            }
        }
        return ans;
    }
};