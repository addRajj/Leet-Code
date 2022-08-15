int prio(char c)
{
    
    if(c=='M')
        return 1000;
    else if(c=='D')
        return 500;
    else if(c=='C')
        return 100;
    else if(c=='L')
        return 50;
    else if(c=='X')
        return 10;
    else if(c=='V')
        return 5;
    else if(c=='I')
        return 1;
    
    
    return 0;
}
class Solution {
public:
    int romanToInt(string s) {
        
        stack<char>st;
        int ans=0;
        reverse(s.begin() , s.end());
        for(int i=0;i<s.size();i++)
        {
            st.push(s[i]);
        }
        
        while(st.size()!=1)
        {
            char c1=st.top();
            st.pop();
            char c2=st.top();
            if(prio(c1)<prio(c2))
            {
                ans+=(-1*(prio(c1)));
            }
            else
            {
                ans+=prio(c1);
            }
        }
        ans+=prio(st.top());
        
        return ans;
    }
};