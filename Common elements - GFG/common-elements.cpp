//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            n1=removedup(A , n1);
            n2=removedup(B , n2);
            n3=removedup(C , n3);
            map<int , int>mp;
            for(int i=0;i<n1;i++)
            {
                mp[A[i]]++;
            }
            for(int i=0;i<n2;i++)
            {
                mp[B[i]]++;
            }
            for(int i=0;i<n3;i++)
            {
                mp[C[i]]++;
            }
            vector<int>v;
            for(auto i:mp)
            {
                if(i.second==3)
                v.push_back(i.first);
            }
            return v;
        }
        
        int removedup(int arr[] , int n)
        {
            int temp[n];
            int j = 0;
            
             for (int i = 0; i < n - 1; i++)
            if (arr[i] != arr[i + 1])
            temp[j++] = arr[i];
 
            temp[j++] = arr[n - 1];
 
            for (int i = 0; i < j; i++)
            arr[i] = temp[i];
            
            return j;

        }
        

};

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}
// } Driver Code Ends