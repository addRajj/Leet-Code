//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
    set<string> str;
    void permutations(string currstr,int start,int len)
    {
        if(start==len-1)
        {
            str.insert(currstr);
            return;
        }
        permutations(currstr,start+1,len);
        currstr.insert(start+1," ");
        permutations(currstr,start+2,len+1);
        currstr.erase(start+1,1);
    }
    vector<string> permutation(string S){
        // Code Here
        vector<string> ans;
        int l=S.length();
        permutations(S,0,l);
        for(auto it:str)
        {
            ans.push_back(it);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int  main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        vector<string> ans;
        Solution obj;
        ans = obj.permutation(S);
        for(int i=0;i<ans.size();i++){
            cout<<"("<<ans[i]<<")";
        }
        cout << endl;
    }
}

// } Driver Code Ends