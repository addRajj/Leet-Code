//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int numberOfSubsequences(string S, string W){
        // code here 
        int count=0;
        for(int i=0;i<S.size();i++)
        {
            int k=0;
            for(int j=i;j<S.size();j++)
            {
                if(S[j]==W[k])
                {
                    k++;
                    S[j]='@';
                }
                
            }
            if(k==W.size())
            count++;
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S,W;
        cin >> S >> W;
        Solution ob;
        cout << ob.numberOfSubsequences(S,W) << endl;
    }
    return 0; 
} 


// } Driver Code Ends