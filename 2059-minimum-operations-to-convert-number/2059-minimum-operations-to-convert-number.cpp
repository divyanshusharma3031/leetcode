class Solution {
public:
    int minimumOperations(vector<int>& nums, int start, int goal) {
//         the obvious approach is dp lets see if it works
          queue<int> q;
        int n = nums.size();
        q.push(start);
        int ans = 0;
        unordered_set<int> vis;
        while(!q.empty()){
            int size = q.size();
            while(size--){
                int curr = q.front();
                q.pop();
                if(curr == goal) return ans;
                if(curr < 0 || curr > 1000 || vis.find(curr) != vis.end()) continue;
                vis.insert(curr);
                for(int i=0;i<n;i++){
                    int add = curr + nums[i];
                    int sub = curr - nums[i];
                    int xxor = curr ^ nums[i];
                    q.push(add);
                    q.push(sub);
                    q.push(xxor);
                }
            }
            ans++;
            
        }
        return -1;
    }
};