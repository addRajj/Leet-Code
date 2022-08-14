class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        
        string ans="";
        map<string , int>mp;
        for(int i=0;i<s.size();i++)
        {
            if(ans.size()!=10)
            {
                ans+=s[i];
            }
            else
               
            {
                mp[ans]++;
                ans.erase(ans.begin());
                ans+=s[i];
            }
        }
        mp[ans]++;
        vector<string>v;
        for(auto i=mp.begin() ; i!=mp.end();i++)
        {
            if(i->second >1)
                v.push_back(i->first);
        }
        
        return v;
    }
};