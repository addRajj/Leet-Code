//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		public:
	 vector<vector<int>>ans;
        void solve(int c, int val, vector<int> &temp)
        {
	    if(c==0)
	    {
	        ans.push_back(temp);
	        return;
	    }
	    if(val==0)
	    {
	        return;
	    }
	    
	    if(c>=val)
	    {
	        temp.push_back(val);
	        solve(c-val,val,temp);
	        temp.pop_back();
	    }
	    solve(c,val-1,temp);
	}
    vector<vector<int>> UniquePartitions(int n) {
       vector<int> temp;
        solve(n,n,temp);
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		vector<vector<int>> ans = ob.UniquePartitions(n);
    	for(auto i : ans)
    		for(auto j: i)
    			cout << j <<" ";
    	cout << "\n";
	}  
	return 0;
}
// } Driver Code Ends