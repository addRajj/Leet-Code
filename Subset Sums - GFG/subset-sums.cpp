//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    
    void solve(vector<int>arr , int n , int i , vector<int>&v)
    {
        
        if(n==0)
        {
            v.push_back(i);
            return ;
            
        }
        int i1=i+arr[0];
        int i2=i;
        arr.erase(arr.begin()+0);
        
        solve(arr , n-1 , i1 , v);
        solve(arr , n-1 , i2 , v);
        return;
            
    }
    
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        int i=0;
        vector<int>v;
        
        
        
        solve(arr , N , i ,v);
        return v;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends