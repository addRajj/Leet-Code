class Solution {
public:
    bool isPowerOfFour(int n) {
        
        vector<int>v;
        
         for (int i = 31; i >= 0; i--) {
        int k = n >> i;
        if (k & 1)
            v.push_back(1);
        else
            v.push_back(0);
         }
             
             if(count(v.begin() , v.end() , 1)==1)
             {
                 
                 reverse(v.begin() , v.end());
                 int g=find(v.begin() , v.end() , 1)-v.begin();
                 if(g%2==0)
                     return true;
                 else
                     return false;
                 
             }
             else
                 return false;
           
        return false;
        
        
    }
};