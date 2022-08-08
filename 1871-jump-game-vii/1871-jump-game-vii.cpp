class Solution {
public:
    vector<bool> dp; 
    bool canReach(string s, int minJump, int maxJump) {
        int n=s.length();
        if(s[n-1]=='1')
        {
            return false;
        }
        dp.resize(n,0);
        dp[0]=1;
        for(int i=1;i<minJump;i++)
        {
            dp[i]=false;//i cant reach here
        }
        int count=0;
        for(int i=1;i<n;i++)
        {
            if((i-minJump)>=0)
            {
                count+=dp[i-minJump];
            }
            if((i-maxJump-1)>=0)
            {
                count-=dp[i-maxJump-1];
            }
            if(count>0 && s[i]=='0')
            {
                dp[i]=1;
            }
        }
        return dp[n-1];
    }
};