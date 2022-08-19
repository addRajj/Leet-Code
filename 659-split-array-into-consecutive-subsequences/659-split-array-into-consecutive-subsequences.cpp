
class Solution {
public:
    bool isPossible(vector<int>& nums) {
        vector<int> cnt (2001, 0);
        for (int& n : nums) cnt[n + 1000]++;
        
        for (int i = 0; i <= 1998; i++) {
            if (cnt[i] == 0) continue;
            while (cnt[i]) {
                int c = 0;
                while (cnt[i+c] <= cnt[i+c+1]) {
                    cnt[i+c]--;
                    c++;
                }
            
                cnt[i+c]--;
                c++;
                //cout<<i<<" "<<c<<endl;
                if (c < 3) return false;
            }
        }
        if (cnt[1999] or cnt[2000]) return false;
        
        return true;
    }
};