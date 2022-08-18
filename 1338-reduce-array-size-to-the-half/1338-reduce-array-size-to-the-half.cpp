class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int , int>mp;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        vector<int>v;
        for(auto i =mp.begin() ; i!=mp.end() ; i++)
        {
            v.push_back(i->second);
        }
        int g=arr.size()/2;
        sort(v.begin() , v.end() , greater<int>());
        int count=0;
        int sum=0;
        for(int i=0;i<v.size();i++)
        {
            sum+=v[i];
            count++;
            if(sum>=g)
                break;
            
           
        }
        return count;
    }
};