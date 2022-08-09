class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        map<int, int>mp;
        for(int i=0;i<nums.size();i++)
        {
            
            mp[nums[i]]++;
            
        }
        priority_queue<pair<int , int>>pq;
        for(auto it=mp.begin(); it!=mp.end() ; it++)
        {
            
            pq.push({it->second , it->first});
            
            
        }
        vector<int>v;
        while(k!=0 && pq.size()!=0)
        {
            
            v.push_back(pq.top().second);
            pq.pop();
            k--;
            
        }
        return v;
    }
};