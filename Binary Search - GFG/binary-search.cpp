//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        // code here
        int x= search(arr , 0 , n-1 , k);
        return x;
    }
    
    int search(int arr[] , int lo , int hi , int x)
    {
        while(lo<=hi)
        {
            int mid=lo+(hi-lo)/2;
            if(arr[mid]==x)
            return mid;
            else if(arr[mid]>x)
            {
                hi=mid-1;
            }   
            else
            {
                lo=mid+1;
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}

// } Driver Code Ends