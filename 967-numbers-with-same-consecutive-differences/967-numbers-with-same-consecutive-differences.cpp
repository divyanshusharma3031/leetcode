class Solution {
public:
    vector<int> ans;
    void consdiff(int num,int curr,int n,int k)
    {
        // cout<<num<<"\n";
        if(n==0)
        {
            ans.push_back(num);
            return ;
        }
        int x=k+curr;
        int y=curr-k;
        int chos=-1;
        if(x>0 && x<10)
        {
            chos=x;
            int a=num*10+chos;
            consdiff(a,chos,n-1,k);
        }
        if(y>=0 && x!=y)
        {
            chos=y;
            int a=num*10+chos;
            consdiff(a,chos,n-1,k);
        }
        return;
    }
    vector<int> numsSameConsecDiff(int n, int k) {
        int curr=-1;
        for(int i=1;i<=9;i++)
        {
            curr=i;
            consdiff(i,curr,n-1,k);
        }
        return ans;
    }
};