class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        
        map<string ,vector<int>>mp;
        vector<string>s1=s;
        for(int i=0;i<s.size();i++)
        {
            
           sort(s[i].begin() , s[i].end());
            mp[s[i]].push_back(i);
        }
        vector<vector<string>>v;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            vector<string>m;
            vector<int>k=it->second;
           for(int j=0;j<k.size();j++)
           {
               m.push_back(s1[k[j]]);
           }
            v.push_back(m);
        }
        return v;
    }
};