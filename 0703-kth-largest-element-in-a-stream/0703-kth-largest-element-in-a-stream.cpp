#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
class KthLargest {
public:
    ordered_set s;
    int k;
    KthLargest(int k, vector<int>& nums) {
        for(auto it:nums)
        {
            s.insert(-it);
        }
        this->k=k;
    }
    int add(int val) {
        s.insert(-val);
        int x=*(s.find_by_order(k-1));
        return -x;
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */