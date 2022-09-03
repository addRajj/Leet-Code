/*bool istr(int i , int k)
{
    stringstream ss;
    ss<<i;
    string s;
    ss>>s;
    for(int j=1;j<s.size();j++)
    {
        int g=s[j]-'0';
        int m=s[j-1]-'0';
        if(abs(m-g)==k)
           continue;
        else
            return false;
    }
    return true;
}
class Solution {
public:
    vector<int> numsSameConsecDiff(int n, int k) {
        
        vector<int>v;
        int lo=pow(10, n)/10;
        int hi=pow(10 , n) -1;
        for(int i=lo;i<=hi;i++)
        {
            if(istr(i , k))
                v.push_back(i);
        }
        return v;
    }
};*/

class Solution {
public:
    
    void f(long long num,int n,int k,vector<int> &ans){
        if(n==0) {ans.push_back(num);return;}
        int lower=((num==0)?1:0);
        for(int i=lower;i<10;i++){
            if(num and abs(i-num%10)!=k) continue;
            num*=10;num+=i;
            f(num,n-1,k,ans);
            num/=10;
        }
    }
    
    vector<int> numsSameConsecDiff(int n, int k) {
        vector<int> ans;
        long long num=0;
        f(num,n,k,ans);
        return ans;
    }
};