//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int n)
    {
      //Your code here
      sort(arr , arr+n);
      int count=1;
      int j=remove(arr , n);
      int maxx=INT_MIN;
      for(int i=1;i<j;i++)
      {
          if(arr[i]==( arr[i-1]+1))
          {
              count++;
          }
          else
          {
              maxx=max(count , maxx);
              count=1;
          }
      }
      maxx=max(count, maxx);
      
      return maxx;
    }
    int remove(int arr[] ,int  n)
    {
        if (n == 0 || n == 1)
        return n;
 
    int temp[n];
 
    // Start traversing elements
    int j = 0;
    // If current element is not equal to next element
    // then store that current element
    for (int i = 0; i < n - 1; i++)
        if (arr[i] != arr[i + 1])
            temp[j++] = arr[i];
 
    // Store the last element as whether it is unique or
    // repeated, it hasn't stored previously
    temp[j++] = arr[n - 1];
 
    // Modify original array
    for (int i = 0; i < j; i++)
        arr[i] = temp[i];
 
    return j;
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends