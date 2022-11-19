//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
          unordered_map<int , int>mp;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>0)
            mp[arr[i]]++;
        }
        vector<int>v;
        int maxx=INT_MIN;
        int sum=0;
        for(auto itr:mp)
        {
            v.push_back(itr.first);
            if(itr.first>maxx)
            maxx=itr.first;
            
            sum+=itr.first;
        }
        if(v.size()==0)
        return 1;
        
        int sum1=(maxx+1)*(maxx)/2;
        int g=sum1-sum;
        if(g==0)
        return maxx+1;
        else
        {
            int i=1;
            while(mp[i]!=0)
            {
                i++;
            }
            return i;
        }
    } 
};

//{ Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    
    //taking testcases
    int t;
    cin>>t;
    while(t--){
        
        //input number n
        int n;
        cin>>n;
        int arr[n];
        
        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        //calling missingNumber()
        cout<<ob.missingNumber(arr, n)<<endl;
    }
    return 0; 
} 
// } Driver Code Ends