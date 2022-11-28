//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
    
    void solve(vector<string>&v , string s , int n , int o , int z)
    {
        if(n==0)
        {
            v.push_back(s);
            return;
        }
        string s1=s;
        s1+='1';
        solve(v , s1 , n-1 , o+1 , z );
        if(z<o)
        {
            string s2=s;
            s2+='0';
            solve(v , s2, n-1 , o , z+1);
        }
        return ;
    }
	vector<string> NBitBinary(int n)
	{
	    // Your code goes here
	   vector<string>v;
	   string s="";
	   s+='1';
	   n--;
	   int o=1;// count of one
	   int z=0;// count of zero
	   
	   solve(v , s, n , o , z);
	   return v;
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
        Solution ob;
   		vector<string> ans = ob.NBitBinary(n);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}
// } Driver Code Ends