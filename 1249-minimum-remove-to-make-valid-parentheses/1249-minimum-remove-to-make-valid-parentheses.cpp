

class Solution {
public:
    string minRemoveToMakeValid(string s) {
        
        stack<pair<char ,int>>st;
        string word="";
        for(int i=0;i<s.size();i++)
        {
            word+=s[i];
            if(s[i]=='(' || s[i]==')')
            {
                if(s[i]=='(')
                    st.push({s[i] ,i});
                else
                {
                    if(st.size()==0 || st.top().first!='(')
                    {
                        st.push({s[i], i});
                    }
                    else 
                    {
                        st.pop();
                    }
                }
            }
        }
        while(st.size()!=0)
        {
            int g=st.top().second;
            word.erase(word.begin()+g);
            st.pop();
        }
        return  word;
        
    }
};