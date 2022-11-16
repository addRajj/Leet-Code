//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int beautySum(string s) {
        // Your code goes here
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            map<char , int>mp;
            int maxx=INT_MIN;
            int mini=INT_MAX;
            int sum=0;
            for(int j=i;j<s.size();j++)
            {
                mp[s[j]]++;
                for(auto itr:mp)
                {
                    if(itr.second>maxx)
                    maxx=itr.second;
                    
                    if(itr.second<mini)
                    mini=itr.second;
                }
               
                sum+=(maxx-mini);
                 maxx=INT_MIN;
                mini=INT_MAX;
            }
            ans+=sum;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.beautySum(s) << endl;
    }
    return 0;
}
// } Driver Code Ends