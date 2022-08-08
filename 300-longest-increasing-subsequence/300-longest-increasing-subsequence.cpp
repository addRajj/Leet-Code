/*class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        int maxi=INT_MIN;

        for(int i=0;i<nums.size();i++)
        {
            map<int ,int>mp;
            mp[nums[i]]=i;
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[j]>nums[i])
                mp[nums[j]]=j;
                
            }
            vector<int>v;
            for(auto i=mp.begin() ;i !=mp.end() ; i++)
            {
                v.push_back(i->second);
            }
            vector<int>v1=v;
            sort(v.begin() ,v.end());
            int count=0;
            int count1=0;
            for(int i=0;i<v.size();i++)
            {
                if(v[i]==v1[i])
                    count++;
                else
                    count1++;
            }
            int g=count1/2 + 1;
            count+=g;
            
            maxi=max(maxi , count);
        }
        
    return maxi;
        
    }
};*/



class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        vector<int> sub;
        
        int n = nums.size();
        
        for(int i = 0; i < n; i++) {
            auto it = lower_bound(sub.begin(), sub.end(), nums[i]);
            if(it != sub.end()) {
                *it = nums[i];
            } else {
                sub.push_back(nums[i]);
            }
        }
        return sub.size();
    }
};