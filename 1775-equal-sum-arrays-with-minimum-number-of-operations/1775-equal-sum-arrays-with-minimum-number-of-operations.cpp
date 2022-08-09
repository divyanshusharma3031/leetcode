class Solution {
public:
    int minop(vector<int>& nums1, vector<int>& nums2)
    {
        int s1=0;
        int s2=0;
        priority_queue<int,vector<int>,greater<int>> p1;
        priority_queue<int> p2;
        for(int i=0;i<nums1.size();i++)
        {
            p1.push(nums1[i]);
            s1+=nums1[i];
        }
        for(int i=0;i<nums2.size();i++)
        {
            p2.push(nums2[i]);
            s2+=nums2[i];
        }
        if(s1==s2)
        {
            return 0;
        }
        int ans=0;
        while(s1<s2)
        {
            int x=p1.top();//increase karne wala element
            int y=p2.top();//decrease karne wala element
            p1.pop();
            p2.pop();
            int a=6-x;
            int b=y-1;
            if(x==6 && y==1)
            {
                return -1;
            }
            if(a>b)
            {
                s1=s1+a;
                p1.push(x+a);
                p2.push(y);
            }
            else
            {
                s2=s2-b;
                p1.push(x);
                p2.push(y-b);
            }
            ans++;
        }
        return ans;
    }
    int minOperations(vector<int>& nums1, vector<int>& nums2) {
        int s1=0;
        int s2=0;
        priority_queue<int,vector<int>,greater<int>> p1;
        priority_queue<int> p2;
        for(int i=0;i<nums1.size();i++)
        {
            p1.push(nums1[i]);
            s1+=nums1[i];
        }
        for(int i=0;i<nums2.size();i++)
        {
            p2.push(nums2[i]);
            s2+=nums2[i];
        }
        if(s1==s2)
        {
            return 0;
        }
        if(s1>s2)
        {
            return minop(nums2,nums1);
        }
        int ans=0;
        while(s1<s2)
        {
            int x=p1.top();//increase karne wala element
            int y=p2.top();//decrease karne wala element
            p1.pop();
            p2.pop();
            int a=6-x;
            int b=y-1;
            if(x==6 && y==1)
            {
                return -1;
            }
            if(a>b)
            {
                s1=s1+a;
                p1.push(x+a);
                p2.push(y);
            }
            else
            {
                s2=s2-b;
                p1.push(x);
                p2.push(y-b);
            }
            ans++;
        }
        return ans;
    }
};