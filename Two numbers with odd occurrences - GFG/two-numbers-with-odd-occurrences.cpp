//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    /*vector<long long int> twoOddNum(long long int Arr[], long long int N)  
    {
        // code here
        unordered_map<long long , long long>mp;
        for(int i=0;i<N;i++)
        {
            mp[Arr[i]]++;
        }
        vector<long long>v;
        for(auto itr: mp)
        {
            if(itr.second % 2==1)
            {
                v.push_back(itr.first);
            }
        }
        sort(v.begin(), v.end() , greater<int>());
        return v;
    }
    */
    
    vector<long long int> twoOddNum(long long int Arr[], long long int N)  
    {
        int XOR = 0;
        int res1 = 0;
        int res2 = 0;
        vector<long long int> ans;
        for(int i=0;i<N;i++) {
            XOR = XOR ^ Arr[i];
        }
        
        int Sn = XOR & ~(XOR -1);
        
        for(int i=0;i<N;i++) {
            if((Arr[i] & Sn) != 0)
                res1 = res1 ^ Arr[i]; // set bit array
            else 
            res2 = res2 ^ Arr[i];
        }
    
        if(res1 > res2) {
            ans.push_back(res1);
            ans.push_back(res2);
        } else {
            ans.push_back(res2);
            ans.push_back(res1);
        }
        return ans;
    }
    
    
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        long long int Arr[N];
        for(long int i = 0;i < N;i++)
        cin>>Arr[i];
        Solution ob;
        vector<long long int>ans=ob.twoOddNum(Arr,N);
        for(long long int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends