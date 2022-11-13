//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++


class Solution{
public:
    int totalWays(int n, vector<int>capacity) {
        long long int ans = 1 ; 

        long long N = 1e9 + 7 ;

        sort(capacity.begin() , capacity.end()) ;

        for(int i = 0 ; i<n ; i++){

            ans = ans*(capacity[i] - i) ;

            ans  = ans%N ;

        }

        return ans ;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>capacity(n);
		for(int i = 0; i < n; i++)
			cin >> capacity[i];
		Solution ob;
		int ans = ob.totalWays(n, capacity);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends