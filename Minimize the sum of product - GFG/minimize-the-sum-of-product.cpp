//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long int minValue(int a[], int b[], int n)
    {
        // Your code goes here
        priority_queue<int , vector<int> ,greater<int>>pq1;
        priority_queue<int>pq2;
        for(int i=0;i<n;i++)
        {
            pq1.push(a[i]);
            pq2.push(b[i]);
        }
        long long sum=0;
        while(pq1.size()!=0 && pq2.size()!=0)
        {
            sum+=(pq1.top() * pq2.top());
            pq1.pop();
            pq2.pop();
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