//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{

		    // Code here there
		    
    unordered_map<char,int> m;
    
    int fact(int len)
    {
        if(len==0 or len==1)
            return 1;
        
        return len*fact(len-1);
    }
    
    int calc(int len)
    {
        int ans = fact(len);
        
        for(auto &x : m)
        {
            ans /= fact(x.second);
        }
        
        return ans;
    }
    
	public:
		vector<string>find_permutation(string s)
		{
		    vector<string> ans;
		    
		    for(auto &x : s)
		        m[x]++;
		    int cnt = calc(s.size());
		    
		    while(cnt--)
		    {
		        ans.push_back(s);
		        next_permutation(begin(s),end(s));
		    }
		    
		    sort(begin(ans),end(ans));
		    
		    return ans;


		}
};




//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends