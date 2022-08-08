class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        priority_queue<int>q;
        for(int i=0;i<nums.size();i++)
        {
            q.push(nums[i]);
        }
        int g;
        int i=0;
        while(i<k)
        {
            g=q.top();
            q.pop();
            i++;
        }
        return g;
        
    }
};