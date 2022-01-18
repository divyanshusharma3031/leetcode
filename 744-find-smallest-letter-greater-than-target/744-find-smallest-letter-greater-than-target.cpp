class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        vector<int> arr;
        for(int i=0;i<letters.size();i++)
        {
            arr.push_back(letters[i]);
        }
        int ele=target;
        int start=0;
        int end=arr.size()-1;
        int n=arr.size();
        char ans=arr[0];
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(arr[mid]>ele)
            {
                ans=arr[mid];
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        return ans;
    }
};