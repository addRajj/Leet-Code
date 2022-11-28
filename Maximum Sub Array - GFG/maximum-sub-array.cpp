//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for 
   class Solution{
public:
	vector<int> findSubarray(int a[], int n) {
	    // code here
	    
	    int maxSum=0;
	    int maxStart=0;
	    int maxEnd=0;
	    int currSum=0;
	    int currStart=0;
	    
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]<0) {currSum=0;
	        
	            currStart=i+1;
	        }
	        
	        else{
	            currSum+=a[i];
	        }
	        
	        if(currSum>maxSum){
	            maxSum=currSum;
	            maxStart=currStart;
	            maxEnd=i+1;
	        }
	        else if(currSum==maxSum)
	        {
	            int currDis=i+1-currStart;
	            int maxDis=maxEnd-maxStart;
	            
	            if(currDis>maxDis)
	            {
	                maxStart=currStart;
	                maxEnd=i+1;
	               
	            }
	        }
	    }
	    
	    vector<int> v;
	    
	    if(maxEnd==0)
	    {
	        v.push_back(-1);
	    }
	    else
	    {
	        for(int j=maxStart;j<maxEnd;j++)
	    {
	        v.push_back(a[j]);
	    }
	    }
	    
	    return v;
	}
};
	    
	    
	 

//{ Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findSubarray(a, n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends