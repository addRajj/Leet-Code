//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int noOfOpenDoors(long long N) {
        // code here
        int n=sqrt(N);
        return n;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.noOfOpenDoors(N) << endl;
    }
    return 0;
}
// } Driver Code Ends