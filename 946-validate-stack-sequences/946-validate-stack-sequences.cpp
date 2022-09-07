class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
//         seems like a directed edge.
//           i have unique values.
        stack<int> s;
        int n=pushed.size();
        int x=0;
        int j=0;
        for(int i=0;i<n;i++)
        {
           s.push(pushed[i]);
            while(!(s.empty()) && s.top()==popped[j])
            {
                s.pop();
                j++;
            }
        }
        return s.size()==0;
    }
};