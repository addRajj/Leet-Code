//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
   
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        
        // Your code here
        if(str1.length()!=str2.length())
        return false;
        int m=str1.length();//n=str2.length();
        int a[127]={0},b[127]={0};
        
        for(int i=0;i<m;i++)
        {
            if( a[str1[i]]==0 and b[str2[i]]==0)
            {
            a[str1[i]]= str2[i];
            b[str2[i]]=str1[i];
            }
            else if(a[str1[i]] != str2[i] )// || b[str2[i]]!=str1[i])
            {
               return false; 
            }
            
       }
          return true;
    }

};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends