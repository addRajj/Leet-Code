//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find all possible unique subsets.
     void solve(vector<int> A,vector<int> &v,int i,set<vector<int>> &ans ){
        if(i==A.size()){
            sort(v.begin(),v.end());
            ans.insert(v);
            return ;
        }
        solve(A,v,i+1,ans);
        v.push_back(A[i]);
        solve(A,v,i+1,ans);
        v.pop_back();
    }
    vector<vector<int> > AllSubsets(vector<int> arr, int n)
    {
        vector<int> v;
        vector<vector<int>> res;
        set<vector<int>> ans;
        sort(arr.begin(),arr.end());
        int i=0;
        
        solve(arr,v,i,ans);
        for(auto it=ans.begin();it!=ans.end();it++)
         res.push_back(*it);
        return res;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            A.push_back(x);
        }
        Solution obj;
        vector<vector<int> > result = obj.AllSubsets(A,n);
        // printing the output
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}   



// } Driver Code Ends