

class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
       int i=0,j=0,n,k=10;
       n=s.size();
        unordered_map<string,int>mp;
        vector<string>v;
        while(j<n)
        {
           if((j-i+1) <k)
             j++;
            else if((j-i+1)==k)
            {
                mp[s.substr(i,k)]++;
                i++;
                j++;
            }
        }
        for(auto &it:mp)
        {
            if((it.second)>1)
            v.push_back(it.first);
        }
        return v;
        
    }
};