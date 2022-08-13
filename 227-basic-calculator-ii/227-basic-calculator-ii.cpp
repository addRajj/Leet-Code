/*class Solution {
public:
    int calculate(string s) {
        
        stack<int>st;
        stack<char>s1;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='+' || s[i]!='-' || s[i]!='*' ||s[i]!='/')
            {
                int g=s[i]-'0';
                st.push(g);
            }
            else
            {
                s1.push(s[i]);
            }
            
        }
        while(s1.size()!=0)
        {
            int k=st.top();
            st.pop();
            int j=st.top();
            st.pop();
            char c=s1.top();
            s1.pop();
            if(c=='*')
             st.push(k*j);
            else if(c=='/')
                st.push(j/k);
            else if(c=='+')
                st.push(j+k);
            else if(c=='-')
                st.push(j-k);
        }
        return st.top();
        
        
        
    }
};
*/



class Solution {
public:
    int calculate(string s) {
        int sz=s.size();
        int ans=0;
        if(sz==0)return 0;
        int currentNo=0, lastNo=0;
        char operation='+';
        
        for(int i=0;i<sz;i++)
        {
             char currentChar=s[i];
             if(isdigit(currentChar))
             {
                currentNo=(currentNo*10)+(currentChar-'0'); 
             }
            if(!isdigit(currentChar) && !isspace(currentChar) || i==sz-1)
             {
                if(operation=='+' || operation=='-')
                {
                    ans+=lastNo;
                    lastNo=(operation=='+')?currentNo:-currentNo;
                }
                else if(operation=='*')
                {
                    lastNo=lastNo*currentNo;
                }
                else if(operation=='/')
                {
                    lastNo=lastNo/currentNo;
                }
                operation=currentChar;
                currentNo=0;
             }
            
        }
        ans+=lastNo;
        return ans;
        
    }
};