//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    int solve( int n, int k){
        if(n==1)return 0;
        int x  = solve(n-1, k);
        int y = (x+k)%n;
        // v.push_back(y);
        return y;
    }
    int safePos(int n, int k) {
      
       return solve( n, k)+1;
        // return
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        
        cin>>n>>k;

        Solution ob;
        cout << ob.safePos(n,k) << endl;
    }
    return 0;
}
// } Driver Code Ends