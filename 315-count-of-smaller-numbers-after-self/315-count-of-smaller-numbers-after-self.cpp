#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        int n=nums.size();
        vector<int> arr=nums;
        vector<int> ans;
        ans.push_back(0);
        ordered_set set1;
        reverse(arr.begin(),arr.end());
        set1.insert(arr[0]);
        for(int i=1;i<n;i++)
        {
            set1.insert(arr[i]);
            int key=set1.order_of_key(arr[i] );
            ans.push_back(key);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};