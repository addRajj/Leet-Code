//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here

        map<int ,int> mp;
      long long int sum=0;
        int len=0;
        
        for(int i=0;i<n;i++)
        {
            sum+=A[i];
            if(sum==0)
            len=i+1;
            else
            {
                if(mp.find(sum)==mp.end())
            mp[sum]=i;
            else
            {
              len=max(len,i-mp[sum]); 
            }
            }
        }
        return len<=0?0:len;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends