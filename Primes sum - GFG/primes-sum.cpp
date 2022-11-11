//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
public:
    string isSumOfTwo(int n){
        // code here
        
        for(int i=2;i<n;i++)
        {
            if(isprime(i) && isprime(n-i))
            return "Yes";
        }
        return "No";
    }
    bool isprime(int n)
    {
        
        if(n==1)
        return false;
        else if(n==2)
        return true;
        else if(n%2==0)
        return false;
        
        for (int i = 3; i <= sqrt(n); i += 2) {
            if (n % i == 0)
                return false;
        }
       
        return true;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isSumOfTwo(N) << endl;
    }
    return 0;
}

// } Driver Code Ends