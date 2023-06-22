//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool lemonadeChange(int N, vector<int> &bills) {
        // code here
        unordered_map<int,int> have;
        for(int i=0;i<N;i++)
        {
            int req=bills[i]-5;
            if(req==5)
            {
                if(have[5]>=1)
                {
                    have[5]=have[5]-1;
                }
                else
                {
                    return false;
                }
            }
            if(req==15)
            {
                if(have[5]>=1 && have[10]>=1)
                {
                    have[5]--;
                    have[10]--;
                }
                else if(have[5]>=3)
                {
                    have[5]=have[5]-3;
                }
                else
                {
                    return false;
                }
            }
            have[bills[i]]++;
        }
        return true;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> bills(N);
        for (int i = 0; i < N; i++) cin >> bills[i];

        Solution obj;
        int ans = obj.lemonadeChange(N, bills);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends