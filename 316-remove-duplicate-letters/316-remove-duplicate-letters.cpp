/*class Solution {
public:
    string removeDuplicateLetters(string s) {
        
        map<char, int>mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]=-1;
        }
        
        // kuch upgradation ki try kr skte bhai isme, uske bad maybe ho jayyy....//
        
        string s1=s;
        for(int i=0;i<s.size();i++)
        {
            if(mp[s[i]]!=-1)
            {
                s1[mp[s[i]]]='0';
                mp[s[i]]=i;
            }
            else
            {
                mp[s[i]]=i;
            }
        }
                   string ans="";
        for(int i=0;i<s1.size();i++)
                   {
                       
                       if(s1[i]!='0')
                           ans+=s1[i];
                       
                   }
    
     return ans;   
    }
};*/




class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> lastIndex(26, 0);
        for (int i = 0; i < s.length(); i++){
            lastIndex[s[i] - 'a'] = i; // track the lastIndex of character presence
        }
        
        vector<bool> seen(26, false); // keep track seen
        stack<char> st;
        
        for (int i = 0; i < s.size(); i++) {
            int curr = s[i] - 'a';
            if (seen[curr]) continue; // if seen continue as we need to pick one char only
            while(st.size() > 0 && st.top() > s[i] && i < lastIndex[st.top() - 'a']){
                seen[st.top() - 'a'] = false; // pop out and mark unseen
                st.pop();
            }
            st.push(s[i]); // add into stack
            seen[curr] = true; // mark seen
        }
        
        string ans = "";
        while (st.size() > 0){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};