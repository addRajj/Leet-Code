//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        int count_z=0;
        int count_o=0;
        int count_t=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            count_z++;
            if(a[i]==1)
            count_o++;
            if(a[i]==2)
            count_t++;
        }
        int k=0;
        while(count_z!=0)
        {
            a[k]=0;
            count_z--;
            k++;
        }
        
        while(count_o!=0)
        {
            a[k]=1;
            count_o--;
            k++;
        }
        while(count_t!=0)
        {
            a[k]=2;
            count_t--;
            k++;
        }
        
    }
    
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends