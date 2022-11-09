//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int maxSubStr(string str){
        //Write your code here
        int count_z=0;
        int count_o=0;
        int count=0;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='0')
            count_z++;
            else
            count_o++;
            
            if(count_z==count_o)
            count++;
        }
        if(count_o!=count_z)
        return -1;
        else
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
	    string str;
	    cin >> str;
	    Solution ob;
	    int ans = ob.maxSubStr(str);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends