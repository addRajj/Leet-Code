//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000


// } Driver Code Ends
/*You are required to complete this method*/

/*class Solution{
  public:
    int maxArea(int M[MAX][MAX], int n, int m) {
        // Your code here
        
         vector<int>v;
         for(int i=0;i<m;i++)
         {
             v.push_back(M[0][j]);
         }
         int maxx=MAH(v);
         for(int i=1;i<n;i++)
         {
             for(int j=0;j<m;j++)
             {
                 if(M[i][j]!=0)
                 v[j]=v[j]+arr[i][j];
                 else
                 v[j]=0;
             }
             
             maxx=max(maxx , MAH(v));
         }
        
    }
    
    int MAH(vector<int>v)
    {
        int maxx=INT_MIN;
        for(i=0;i<v.size();i++)
        {
            int ll=l_less(v , i);
            int rl=r_less(v, i);
            maxx=max(maxx , (ll-rl-1)*v[i]);
        }
        return maxx;
    }
    int r_less(vector<int>v , int k)
    {
        
        stack<int>s;
        for(int i=k;i<v.size();i++)
        {
            if(s.size()==0)
            s.push(v[i]);
        }
        else
        {
            if(v[i]>=v[k])
            {
                s.push(v[k]);
            }
            else
            {
                
            }
        }
    }
    
    
};
*/

class Solution{
    private:
     vector<int> nextsmallerelement(int * arr, int n)
         {
         stack<int> st;
         st.push(-1);
         vector<int> result(n);  
          for(int i = n - 1; i>=0; i-- )
           {
                int curr = arr[i];
    
                while( st.top()!=-1 && arr[st.top()] >= curr )
                {
                    st.pop();
                }
                result[i] = st.top();
    
                st.push(i);        
            }
            return result;
        }
         vector<int> prevsmallerelement(int * arr, int n)
       {
        stack<int> st;
        st.push(-1);
        vector<int> result(n);  
        for(int i =0; i<n; i++){
            int curr = arr[i];

            while( st.top()!=-1 && arr[st.top()] >= curr )
            {
                st.pop();
            }
            result[i] = st.top();

            st.push(i);        
        }
        return result;
    }
        
         int largestRectangleArea(int * heights, int n) {
        // int n=heights.size();
        vector<int> next(n);
        next=nextsmallerelement(heights,n);

          vector<int> prev(n);
          prev=prevsmallerelement(heights, n);

          int area=INT_MIN;
          for(int i=0; i<n; i++)
          {
              int l=heights[i];
             
              
              if(next[i]==-1){
                  next[i]=n;
              } 
              int b=next[i]- prev[i] -1;

              int newarea=l*b;
              area=max(area, newarea);
          }
          return area;
     }
  public:
    int maxArea(int M[MAX][MAX], int n, int m) {
       //first area k liya ;;
       int area=largestRectangleArea(M[0],m);
       for(int i=1; i<n; i++)
       {
           for(int j=0; j<m; j++)
           {
               if(M[i][j]!=0)
               {
                   M[i][j]+=M[i-1][j];
               }
               else
               {
                   M[i][j]=0;
               }
           } 
           area=max(area, largestRectangleArea(M[i],m));
       }
     
       return area;
    }
};



//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    }
}

// } Driver Code Ends