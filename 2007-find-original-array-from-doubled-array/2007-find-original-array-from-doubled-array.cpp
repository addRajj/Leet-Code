class Solution { 
//Runtime: 509 ms, faster than 80.97% of C++ online submissions for Find Original Array From Doubled Array.
//Memory Usage: 146.3 MB, less than 38.62% of C++ online submissions for Find Original Array From Doubled Array.
public:
    vector<int> findOriginalArray(vector<int>& changed) 
    {
        ios_base::sync_with_stdio(0);
        int l = changed.size();
        // If the size is odd, then the vector 'changed' is invalid, has to be even
        // If the original vector had n elements , changed will have 2*n elements
        if (l & 1)
            return {};
        // Stores the frequency of each element in the vector
        map<int,int> mp;
        // Map to get an answer vector
        vector<int> ans;
        // Get the frequency of each element
        for(int i : changed)
            mp[i]++;
        //Since we have used the map, keys are ordered, unlike in the unordered_map
        //Traverse the map
        for(auto i : mp)
        {
            //Store the first key
            int x = i.first;
            //If the frequency of the current element is 0
            //Continue the loop
            if(mp[x] == 0)
                continue;
            //While the current element's frequency lasts
            while(mp[x] > 0)
            {
                //Push the current element
                ans.push_back(x);
                //Decrease its frequency
                mp[x]--;
                //Decrease the frequency of 2*x
                mp[2*x]--;
            }
            //If the current element's frequency is less than 0, 
            //This means the vector changed was invalid
			//Hence return the empty vector
            if(mp[x] < 0)
                return {};
        }
        return ans;
    }
};