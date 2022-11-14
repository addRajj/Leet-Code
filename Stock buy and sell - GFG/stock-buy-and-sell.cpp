//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to find the days of buying and selling stock for max profit.
    vector<vector<int> > stockBuySell(vector<int> A, int n){
        // code here
        vector<vector<int>>ans;
        stack<int>st;
        int j=n-1;
        int i;
        // to tha pr hum basically ek stack le rhe hai.. aur usme elements vector ke end se add krte
        // ja rhe hai, hrr ek push me sbse phle kuch conditions check krni padegi , 
        // jaise 1. ki agr stack empty hai to push
        // 2. ki agr jo elements hum dall rhehai wo stack ke top se less hai to mtlb uss moment pr humme 
        // stock to buy nhi krna chahiye, kyuki wo abhi tk ka sbse chota element hai, pr usse piche ka 
        // humee idea nhi hai
        // aur 3. ki agr elemenet bada aaya to humme ussse phle wale din hi stock ko purcahse kr lena chahiye
        // tha
        
        // bs itni conditions he dekhtni hai :)
        for(i=n-1;i>=0;)
        {
            if(st.size()==0)
            {
                st.push(A[i]);
                i--;
            }
            else
            {
                if(A[i]<st.top())
                {
                    st.push(A[i]);
                    i--;
                }
                else
                {
                    ans.push_back({i +1 ,j});
                    j=i;
                    while(st.size()!=0)
                    {
                        st.pop();
                    }
                }
            }
        }
        ans.push_back({i +1, j});
        if(ans.size()>=A.size())
        {
            ans.clear();
            return ans;
        }
        
        reverse(ans.begin() , ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int check(vector<vector<int>> ans, vector<int> A, int p)
{
    int c = 0;
    for(int i=0; i<ans.size(); i++)
        c += A[ans[i][1]]-A[ans[i][0]];
    return (c==p) ? 1 : 0;
}

int main()
{   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A(n);
        for (int i=0; i<n; ++i){
            cin>>A[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.stockBuySell(A, n);
        int p = 0;
        for(int i=0; i<n-1; i++)
        {
            int x = A[i+1]-A[i];
            if(x>0)
                p += x;
        }
        if(ans.size()==0)
            cout<<"No Profit";
        else{
            cout<<check(ans,A,p);
        }cout<<endl;
    }
    return 0;
}


// } Driver Code Ends