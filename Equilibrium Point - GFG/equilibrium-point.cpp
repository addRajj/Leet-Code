//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends

class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
   int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        int sum=0;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
            arr[i]=sum;
        }
        int sum1=0;
        int arr1[n];
        for(int i=n-1;i>=0;i--)
        {
            sum1+=a[i];
            arr1[i]=sum1;
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]==arr1[i])
            return i+1;
        }
        return -1;
        
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends