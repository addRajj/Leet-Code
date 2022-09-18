class Solution {
public:
    int trap(vector<int>& nums) {
        
        stack<int>s1;
        stack<int>s2;
        s1.push(nums[0]);
        s2.push(nums[nums.size()-1]);
        
        vector<int>v1;
        vector<int>v2;
        
        //----- for the left side array
        for(int i=0;i<nums.size();i++)
        {
            if(s1.top()<nums[i])
            {
                s1.pop();
                s1.push(nums[i]);
                v1.push_back(nums[i]);
            }
            else if(i!=0)
            {
                v1.push_back(s1.top());
            }
            else 
            {
                v1.push_back(-1);
            }
        }
        
        //------ for the right side array
        
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(s2.top()<nums[i])
            {
                s2.pop();
                s2.push(nums[i]);
                v2.push_back(nums[i]);
            }
            else if(i!=(nums.size()-1))
            {
                v2.push_back(s2.top());
            }
            else
            {
                v2.push_back(-1);
            }
                
        }
        
        reverse(v2.begin() , v2.end());
        
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            if(v1[i]==-1 ||v2[i]==-1)
            {
                continue;
            }
            else
            {
                int g=min(v1[i], v2[i]);
                sum+=(g-nums[i]);
            }
        }
        return sum;
        
        
        
    }
};