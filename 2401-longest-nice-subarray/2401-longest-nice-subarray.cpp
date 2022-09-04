class Solution {
public:
   /* int longestNiceSubarray(vector<int>& nums) {
        
        int i=0;
        int j=0;
        vector<int>v;
        while(j<nums.size())
        {
            if(v.size()==0)
                v.push_back(nums[j]);
            else
            {
                if(((v[v.size()-1])&nums[j])==0)
                {
                    i++;
                    continue;
                }
                else
                {
                    
                }
                
            }
        }
        
    }
};*/

int longestNiceSubarray(vector<int>& nums) {
    int used = 0, j = 0, res = 0;
    for (int i = 0; i < nums.size(); ++i) {
        while ((used & nums[i]) != 0)
            used ^= nums[j++];
        used |= nums[i];
        res = max(res, i - j + 1);
    }
    return res;
}
};