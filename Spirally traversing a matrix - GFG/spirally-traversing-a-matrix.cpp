//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
 
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > arr, int r, int c) 
    {
        // code here 
        vector<int> res;
        int row=0;
        int row_end=r-1;
        int col=0;
        int col_end=c-1;
        while(row<=row_end && col<=col_end){
            for(int i=col;i<=col_end;i++){
                res.push_back(arr[row][i]);
            }
           
            for(int j=row+1;j<=row_end;j++){
               res.push_back(arr[j][col_end]);
            }
           if(col_end-col+1>1 && row_end-row+1!=1){
            for(int i=col_end-1;i>=col;i--){
                res.push_back(arr[row_end][i]);
            }
           }
            if(col_end-col+1>1 && row_end-row+1!=1){
            for(int j=row_end-1;j>=row+1;j--){
                res.push_back(arr[j][col]);
            }
            }
            row++;
            row_end--;
            col++;
            col_end--;
        }
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends