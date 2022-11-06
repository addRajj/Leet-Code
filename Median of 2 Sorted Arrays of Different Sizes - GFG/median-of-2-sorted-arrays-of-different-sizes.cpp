//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    double MedianOfArrays(vector<int>& a1, vector<int>& a2)
    {
        // Your code goes here
        int i=0;
        int j=0;
        vector<int>ans;
        while(i<a1.size() && j<a2.size())
        {
            if(a1[i]<a2[j])
            {
                ans.push_back(a1[i]);
                i++;
            }
            else
            {
                ans.push_back(a2[j]);
                j++;
            }
        }
        while(j!=a2.size())
        {
            ans.push_back(a2[j]);
            j++;
        }
        while(i!=a1.size())
        {
            ans.push_back(a1[i]);
            i++;
        }
        
        if(ans.size()%2==0)
        {
            int mid=ans.size()/2;
            int midi=mid-1;
            int g=ans[mid];
            int g1=ans[midi];
            double d1=(double)g;
            double d2=(double)g1;
            return (d1 + d2)/2;
        }
        else
        {
            int mid=ans.size()/2 ;
            int g=ans[mid];
            double d1=(double)g;
            return d1;
        }
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i){
            cin>>array2[i];
        }
        Solution ob;
        cout<<ob.MedianOfArrays(array1, array2)<<endl;
    }
    return 0; 
}



// } Driver Code Ends