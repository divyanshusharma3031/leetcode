class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& arr, int k) {
         unordered_map<int,int> mpp;
         if(arr.size()==1)
         {
             return false;
         }
         if(k>=arr.size())
         {
             k=arr.size()-1;
         }
         for(int i=0;i<=k;i++)
         {
             mpp[arr[i]]++;
             if(mpp[arr[i]]>=2)
             {
                 return true;
             }
         }
        
         int n=arr.size();
         int j=0;
         for(int i=k+1;i<n;i++)
         {
             mpp[arr[j]]--;
             mpp[arr[i]]++;
             if(mpp[arr[i]]>=2)
             {
                 return true;
             }
             j++;
         }
        return false;
    }
};