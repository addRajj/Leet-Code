class Solution {
public:
    int findTheWinner(int n, int k) {
        
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            v.push_back(i+1);
        }
        int i=0;
        while(v.size()!=1)
        {
            int g=(i+k-1)%v.size();
            v.erase(v.begin()+g);
            i=g;
            
        }
        
        return v[0];
    }
};