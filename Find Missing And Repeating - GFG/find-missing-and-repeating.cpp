//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        int ans[2];
        int *p=ans;
        
        unordered_map<int , int>mp;
        int d=0;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
            if(mp[arr[i]]==2 && d==0)
            {
                ans[0]=arr[i];
                d=1;
            }
        }
        
        for(int i=1;i<=n;i++)
        {
            if(mp[i]==0)
            {
                ans[1]=i;
                break;
            }
        }
    
        return p;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends