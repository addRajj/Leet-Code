class Solution {
public:
    string frequencySort(string s) {
        
        map<char , int >mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        priority_queue<pair<int , char>>pq;
        for(auto itr=mp.begin(); itr!=mp.end() ;itr++)
        {
            
            pq.push({itr->second , itr->first});
            
        }
        string word="";
        while(pq.size()!=0)
        {
            int k=pq.top().first;
            while(k!=0)
            {
                word+=pq.top().second;
                k--;
            }
            
            pq.pop();
        }
        return word;
    }
};