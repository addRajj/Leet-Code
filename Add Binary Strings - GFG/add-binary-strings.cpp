//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	string addBinary(string a, string b)
	{
	   int i=a.size()-1;
	   int j=b.size()-1;
	   int carry=0;
	   string s="";
	   while(i>=0 && j>=0)
	   {
	       int g1=a[i]-'0';
	       int g2=b[j]-'0';
	       int val=g1+g2+carry;
	       if(val==2)
	       {
	           carry=1;
	           val=0;
	       }
	       else if(val==3)
	       {
	           carry=1;
	           val=1;
	       }
	       else
	       {
	           carry=0;
	       }
	       
	       s+=to_string(val);
	       i--;
	       j--;
	   }
	   while(i>=0)
	   {
	       int val=a[i]-'0';
	       val+=carry;
	       if(val==2)
	       {
	           carry=1;
	           val=0;
	       }
	       else if(val==3)
	       {
	           carry=1;
	           val=1;
	       }
	       else
	       {
	           carry=0;
	       }
	        s+=to_string(val);
	       i--;
	   }
	   while(j>=0)
	   {
	       int val=b[j]-'0';
	       val+=carry;
	       if(val==2)
	       {
	           carry=1;
	           val=0;
	       }
	       else if(val==3)
	       {
	           carry=1;
	           val=1;
	       }
	       else
	       {
	           carry=0;
	       }
	       s+=to_string(val);
	       
	       j--;
	   }
	   if(carry==1)
	   {
	       s+='1';
	   }
	   
	   reverse(s.begin() , s.end());
	   while(s[0]=='0')
	   {
	       s.erase(s.begin() +0);
	   }
	   return s;
	   
	}
};

//{ Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		string A, B; cin >> A >> B;
		Solution ob;
		cout << ob.addBinary (A, B);
		cout << "\n";
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends