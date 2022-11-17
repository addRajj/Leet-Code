//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	    vector<int>pos;
	    vector<int>neg;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>=0)
	        pos.push_back(arr[i]);
	        
	        if(arr[i]<0)
	        neg.push_back(arr[i]);
	     }
	     int count=0;
	     int j=0;
	     int k=0;
	     
	     if(pos.size()==0 || neg.size()==0)
	     return;
	     
	     for(int i=0;i<n;i++)
	     {
	         
	         if(count==0 && pos.size()!=0)
	         {
	             arr[i]=pos[j];
	             j++;
	             if(k!=neg.size())
	             count=1;
	         }
	         else if(count==1 && neg.size()!=0)
	         {
	             arr[i]=neg[k];
	             k++;
	             if(j!=pos.size())
	             count=0;
	         }
	   
	     }
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends