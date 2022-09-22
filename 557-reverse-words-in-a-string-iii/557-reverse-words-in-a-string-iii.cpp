class Solution {
public:
    string reverseWords(string s) {
        
        string ans="";
        string word="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                reverse(ans.begin() , ans.end());
                word+=ans;
                if(i!=(s.size()-1))
                    word+=' ';
                
                ans.clear();
                ans="";
            }
            else if(s[i]!=' ' && i!=(s.size()-1))
            ans+=s[i];
            else if(i==(s.size()-1))
            {
                ans+=s[i];
                reverse(ans.begin() , ans.end());
                word+=ans;
            }
            
        }
        return word;
        
    }
};