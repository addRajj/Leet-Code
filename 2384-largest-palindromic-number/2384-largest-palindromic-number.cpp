


class Solution {
public:
    string a = "" , b = "" ;
    string largestPalindromic(string nums) {
        int f[10] = {} ;
        for(auto &x : nums) ++f[x-'0'] ;
        
        for(int i = 9 ; i >= 0 ; --i){
            if(!i and (a.empty() || b.empty())) continue ;
            while(f[i] > 1){
                a.push_back(i + '0') , b.push_back(i + '0') ;
                f[i] -= 2 ;
            }
        }
        
        //check once more to insert the largest number in the middle of number
        for(int i = 9 ; i >= 0 ; --i){
            if(f[i]){
                a.push_back(i + '0') ;
                break ;
            }
        }
        
        reverse(begin(b),end(b)) ;
        return a + b ;
        
    }
};