// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    vector<int> findtwofromxor(int b,vector<int> &nums)
    {
        int temp=b;
        int pos=0;
        int x=0;
        vector<int> ans;
        while((temp&1)!=1)
        {
            pos++;
            temp=temp>>1;
        }
        int mask=1<<pos;
        for(int i=0;i<nums.size();i++)
        {
            if((nums[i]&mask)>0)
            {
                x=x^nums[i];
            }
        }
        
        int y=b^x;
        ans.push_back(min(x,y));
        ans.push_back(max(x,y));
        return ans;
    }
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        int n=nums.size();
        vector<int> ans;
        int b=0;
        for(int i=0;i<n;i++)
        {
            b=b^nums[i];
        }
        return findtwofromxor(b,nums);
    }
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}  // } Driver Code Ends