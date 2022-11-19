//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int A[], int N) 
    { 
        int i=0;
        int j=N-1;
        int maxx=0;
        while(i!=N )
        {
            if(j==0)
            {
                i++;
                j=N-1;
            }
            else
            {
                if(A[j]<A[i])
                j--;
                else
                {
                    maxx=max((j-i) , maxx);
                    i++;
                    j=N-1;
                
                }
            }
        }
        return maxx;
    }
};

//{ Driver Code Starts.
  
/* Driver program to test above functions */
int main() 
{
    int T;
    //testcases
    cin>>T;
    while(T--){
        int num;
        //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        Solution ob;
        
        //calling maxIndexDiff() function
        cout<<ob.maxIndexDiff(arr, num)<<endl;    
        
    }
    return 0;
} 
// } Driver Code Ends