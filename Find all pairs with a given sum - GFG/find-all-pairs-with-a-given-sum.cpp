//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    vector<pair<int,int>> allPairs(int a[], int b[], int n, int m, int x)
    {
        // Your code goes here  
        vector<pair<int ,int>>v;
        sort(b , b+m);
        for(int i=0;i<n;i++)
        {
            if(ispresent(b, 0 , m-1 ,  x-a[i]))
            {
                v.push_back({a[i] , x-a[i]});
            }
        }
        sort(v.begin() , v.end());
        return v;
    }
    bool ispresent(int arr[]  , int lo , int hi , int x)
    {
        while(lo<=hi)
        {
            int mid=lo+(hi-lo)/2;
            if(arr[mid]==x)
            return true;
            else if(arr[mid]>x)
            {
                hi=mid-1;
            }
            else if(arr[mid]<x)
            {
                lo=mid+1;
            }
        }
        return false;
    }
};


//{ Driver Code Starts.
int main() {
	long long t;
	cin >> t;
	
	while(t--){
	    int N, M, X;
	    cin >> N >> M >> X;
        int A[N], B[M];
        
	    for(int i = 0;i<N;i++)
	        cin >> A[i];
	    for(int i = 0;i<M;i++)
	        cin >> B[i];
	        
	   Solution ob;
	   vector<pair<int,int>> vp = ob.allPairs(A, B, N, M, X);
	   int sz = vp.size();
        if(sz==0)
        cout<<-1<<endl;
        else{
            for(int i=0;i<sz;i++){
                if(i==0)
                cout<<vp[i].first<<" "<<vp[i].second;
                else
                cout<<", "<<vp[i].first<<" "<<vp[i].second;
            }
            cout<<endl;
        }
	}
	return 0;
}
// } Driver Code Ends