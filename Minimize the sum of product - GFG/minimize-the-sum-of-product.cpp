//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long int minValue(int a[], int b[], int n)
    {
      
      vector<int>v1, v2;
      
      for(int i=0;i<n;i++)
      {
            v1.push_back(a[i]);
            v2.push_back(b[i]);
      }
      sort(v1.begin() , v1.end());
      sort(v2.begin() , v2.end() , greater<int>());
      long long sum=0;
      for(int i=0;i<n;i++)
      {
          sum+=(v1[i]*v2[i]);
          
      }
      return sum;
        
    }
};

//{ Driver Code Starts.
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n, i;
         cin>>n;
         int a[n], b[n];
         for(i=0;i<n;i++)
         cin>>a[i];
         for(i=0;i<n;i++)
         cin>>b[i];
         Solution ob;
         cout<< ob.minValue(a, b, n) <<endl;
     }
	
	return 0;
}
// } Driver Code Ends