//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
		int characterReplacement(string s, int k){
		    // Code here
		    unordered_map<char, int> mp;
		    int i = 0, j = 0;
		    int maxi = 0;
		    int ans = 0;
		    while (j < s.length())
		    {
		        mp[s[j]]++;
		        maxi = max(maxi, mp[s[j]]);
		        
		        int len = j - i + 1;
		        if (len - maxi <= k)
		        {
		            j++;
		            ans = max(ans, len);
		        }
		        else
		        {
		            mp[s[i]]--;
		            j++;
		            i++;
		        }
		    }
		    return ans;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		int k;
		cin >> k;
		Solution obj;
		int ans = obj.characterReplacement(s, k);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends