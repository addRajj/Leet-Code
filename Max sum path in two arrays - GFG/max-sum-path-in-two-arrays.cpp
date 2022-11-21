//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
    public:
    /*You are required to complete this method*/
     int max_path_sum(int A[], int B[], int l1, int l2)
    {
    
        //Your code here
        int i=0,j=0,p1=0,p2=0;
        while(i<l1 &&j<l2)
        {
            if(A[i]<B[j])
            p1+=A[i++];
            else if(A[i]>B[j])
            p2+=B[j++];
            else
            {
                p1+=A[i++];
                p2+=B[j++];
                p1=max(p1,p2);
                p2=max(p1,p2);
            }
        }
        while(i<l1)
        p1+=A[i++];
        while(j<l2)
        p2+=B[j++];
        return max(p1,p2);
    }
};

//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;

    while(T--)
    {
        int N,M;
        cin>>N>>M;
        fflush(stdin);
        int a[N],b[M];
        for(int i=0;i<N;i++)
            cin>>a[i];
        for(int i=0;i<M;i++)
            cin>>b[i];
        Solution obj;
        int result = obj.max_path_sum(a,b,N,M);
        cout<<result<<endl;
    }
}


// } Driver Code Ends