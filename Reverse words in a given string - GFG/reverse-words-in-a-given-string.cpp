//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    void rev(int i ,int j ,string &s){
        
        while(i<j){
            swap(s[i] , s[j]);
            i++;
            j--;
        }
    }
    string reverseWords(string s) 
    { 
        // code here 
        reverse(s.begin() ,s.end());
        
        int i = 0 ; 
        int j = 0;
        
        while(j<s.size()){
            
            if(s[j] == '.'){
                
                rev(i , j-1 , s);
                i = j+1;
            }
            
            j++;
        }
        
        rev(i , j-1 ,s);
        return s;
        
    } 
}; 


//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends