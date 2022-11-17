//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template in C++

class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        // code here
        vector<int>v;
        map<int , vector<int>>mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]].push_back(i);
            if(mp[arr[i]].size()==2)
            v.push_back(mp[arr[i]][0]);
        }
        if(v.size()==0)
        return -1;
        else
        {
            sort(v.begin() , v.end());
            return v[0] + 1;
        }
        
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; ++i) cin >> arr[i];
        Solution ob;
        cout << ob.firstRepeated(arr, n) << "\n";
    }

    return 0;
}

// } Driver Code Ends