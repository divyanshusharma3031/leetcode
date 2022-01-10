class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& arr, int target) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        vector<vector<int>> ans;
        if(n<4)
        {
            return ans;
        }
        for(int i=0;i<n;i++)
        {    
            for(int j=i+1;j<n;j++)
            {
                 int front=j+1;
                int back=n-1;
                int y=arr[i]+arr[j];
                int x=target-y;
                while(front<back)
                {
                    if(arr[front]+arr[back]<x)
                    {
                        front++;
                    }
                    else if(arr[front]+arr[back]>x)
                    {
                        back--;
                    }
                    else
                    {
                        ans.push_back({arr[i],arr[j],arr[front],arr[back]});
                        
                        while(front<n-1 && arr[front]==arr[front+1])
                        {
                            front++;
                        }
                        while(back>0 && arr[back]==arr[back-1])
                        {
                            back--;
                        }
                        front++;
                        back--;
                    }
                }
                while(j<n-1 && arr[j]==arr[j+1])
                {
                    j++;
                }
            }
            while(i<n-1 && arr[i]==arr[i+1])
            {
                i++;
            }
        }
        return ans;
    }
};