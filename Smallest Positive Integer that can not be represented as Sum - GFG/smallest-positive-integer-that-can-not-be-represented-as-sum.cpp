//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function Template for C++
#define ll long long
class Solution
{   
public:
    long long smallestpositive(vector<long long> array, int n)
    { 
    
        sort(array.begin(), array.end());
        long long total=1;
        for(int i = 0; i<n; i++){
            if(array[i]>total)
            return total;
            total = total + array[i];
        
        }
        return total;
    } 
};


//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<long long> array(n);
        for (int i = 0; i < n; ++i)
        {
            cin>>array[i];
        }
        Solution ob;
        cout<<ob.smallestpositive(array,n)<<"\n";
    }
    return 0; 
} 

// } Driver Code Ends