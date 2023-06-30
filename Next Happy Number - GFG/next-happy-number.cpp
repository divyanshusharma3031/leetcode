//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends


class Solution{
public:
    
    int nextNum(int n){

        int newVal = 0;

        while(n){

            int temp = n%10;

            newVal += temp*temp;

            n /= 10;
        }

        return newVal;

    }


    bool isHappy(int n) {
        
        int slow = n;
        int fast = n;

        do{

            slow = nextNum(slow);
            fast = nextNum(fast);

            if(fast == 1) return true;// possibility that num n get reduced to 1 only

            fast = nextNum(fast);

            if(fast == 1) return true; // possibility that num n get reduced to 1 only

        }while(slow != fast);

        return false; // cycle exsits


    }

    int nextHappy(int N){
        
        for(int i=N+1 ; i<INT_MAX ; i++){
            
            if(isHappy(i)) return i;
            
        }
        
        return -1;
        
        
        
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.nextHappy(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends