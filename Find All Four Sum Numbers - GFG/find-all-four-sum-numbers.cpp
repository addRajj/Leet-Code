//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    bool chk(int i, int j, int x, int y)
    {
        if (i == x || i == y || j == x || j == y) return 0;
        return 1;
    }
    vector<vector<int> > fourSum(vector<int> &A, int k) {
        int n = A.size();
        set<vector<int>> ans;
        map<int,vector<pair<int,int>> > mp;
        sort(A.begin() , A.end());
        for (int i=0 ; i<n ; i++)
        {
            for (int j=i+1 ; j<n ; j++)
            {
                int sum = A[i] + A[j];
                mp[sum].push_back({i,j});
            }
        }
        for (int i=0 ; i<n ; i++)
        {
            for (int j=i+1 ; j<n ; j++)
            {
                int sum = A[i] + A[j];
                if (mp.find(k-sum) != mp.end())
                {
                    for (auto itr : mp[k-sum]) {
                        int x = itr.first;
                        int y = itr.second;
                        
                        if (chk(i,j,x,y)) {
                            vector<int> temp = {A[i],A[j],A[x],A[y]};
                            sort(temp.begin() , temp.end());
                            ans.insert(temp);
                        }
                    }
                }
            }
        }
        return vector<vector<int>>(ans.begin() , ans.end());
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends