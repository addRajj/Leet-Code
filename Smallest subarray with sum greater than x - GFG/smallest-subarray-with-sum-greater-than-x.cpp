//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:

      public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
        int i=0;
        int j=0;
        int sum=arr[0];
        int mn=INT_MAX;
        if(n==1)
        {
            if(arr[0]>x)
            return 1;
            else 
            return 0;
        }
        while(j<n)
        {
            if(sum<=x)
            {
                j++;
                sum+=arr[j];
            }
            if(sum>x)
            {
                mn=min(mn,j-i+1);
                sum-=arr[i];
                i++;
            }
            
        }
        return mn;
    }
};

//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.smallestSubWithSum(a,n,x)<<endl;
	}
	return 0;
}
// } Driver Code Ends