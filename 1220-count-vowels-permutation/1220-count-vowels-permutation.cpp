
#define mod 1000000007
class Solution {
public:
    int solve(int Pre,int count,int &n,vector<vector<int>>&dp)
    {
        if(count==n)//Base Condition:- If count become n ,then this is the one of the way to form string.
            return 1;
        
        if(dp[count][Pre]!=-1) return dp[count][Pre]%mod;//Memoization
        int ans=0;
        for(int i=1;i<=5;i++)
        {
            if(Pre==1 && i==2) //If previous taken is a
                ans=(ans%mod+solve(i,count+1,n,dp)%mod)%mod;
            else if(Pre==2 && (i==1 || i==3)) //If previous is e
                ans=(ans%mod+solve(i,count+1,n,dp)%mod)%mod;
            else if(Pre==3 && i!=3) //If previous taken is i
                ans=(ans%mod+solve(i,count+1,n,dp)%mod)%mod;
            else if(Pre==4 && (i==3 || i==5)) //If previous taken is o
                ans=(ans%mod+solve(i,count+1,n,dp)%mod)%mod;
            else if(Pre==5 && i==1) //If previous taken is u.
                ans=(ans%mod+solve(i,count+1,n,dp)%mod)%mod;
        }
        return dp[count][Pre]=ans%mod; //store the value in Dp table.
    }
    int countVowelPermutation(int n) {
        
        int ans=0;
        vector<vector<int>>dp(n+1,vector<int>(6,-1)); //Dp table:- Initially all values is -1;
        for(int i=1;i<=5;i++)
        {
         ans= (ans%mod + solve(i,1,n,dp)%mod)%mod; //Call function solve for every vowel taking 1st place.
        }
        
        return ans%mod; // return ans;
    }
};