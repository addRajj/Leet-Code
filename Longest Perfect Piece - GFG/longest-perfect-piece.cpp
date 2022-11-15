//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    
     int longestPerfectPiece(int arr[], int N) {
         int i = 0, j = 0;
        int ans = 0, mn_idx = 0, mx_idx = 0;
        while(j < N){
            if(arr[j] > arr[mx_idx]){
                mx_idx = j;
            }
            if(arr[j] <= arr[mn_idx]){
                mn_idx = j;
            }
            
            if(arr[mx_idx] - arr[mn_idx] <= 1){
                ans = max(ans, j - i + 1);
            }else{
                i = min(mx_idx, mn_idx) + 1;
                mn_idx = i;
                mx_idx = i;
                if(arr[mx_idx] < arr[j]){
                    mx_idx = j;
                }
            }
            j++;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution ob;
        cout << ob.longestPerfectPiece(arr,N) << endl;
    }
    return 0;
}
// } Driver Code Ends