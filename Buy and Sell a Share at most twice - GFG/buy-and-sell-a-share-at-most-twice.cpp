//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

int maxProfit(vector<int>&price){
       int n=price.size();
       vector<int>v1(n,0);
       int mn=price[0];
       for(int i=1;i<n;i++){
            v1[i]=v1[i-1];
           if(price[i]>mn){
               v1[i]=max(v1[i],price[i]-mn);
           }
           else{
               mn=price[i];
           }
       }
       vector<int>v2(n,0);
       int mx=price[n-1];
       for(int i=n-2;i>=0;i--){
           v2[i]=v2[i+1];
           if(price[i]<mx){
               v2[i]=max(v2[i],mx-price[i]);
           }
           else{
               mx=price[i];
           }
       }
       int ans=0;
       for(int i=0;i<n;i++){
           ans=max(ans,v1[i]+v2[i]);
       }
       return ans;
}

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int> price(n);
        for(int i=0;i<n;i++) cin>>price[i];
        cout<<maxProfit(price)<<endl;
    }

}

// } Driver Code Ends