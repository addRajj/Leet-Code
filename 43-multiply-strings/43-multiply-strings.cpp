/*class Solution {
public:
    string multiply(string num1, string num2) {
        
        vector<vector<int, int>>mat;
        reverse(num2.begin() , num2.end());
        reverse(num1.begin() , num1.end());
        
        
        for(int i=0;i<num2.size();i++)
        {
            int k=num2[i]-'0';
            int carry=0;
            vector<int>v;
            
            for(int j=0;j<num1.size();j++)
            {
                int g=num1[j]-'0';
                int ans=g*k + carry;
                
                carry=ans/10;
                v.push_back(ans%10);
            }
            if(carry>0)
                v.push_back(carry);
            
            reverse(v.begin(), v.end());
            mat.push_back(v);
            
        }
        int k=0;
        int sum=0;
        for(int i=0;i<mat.size();i++)
        {
            while(k!=0)
            {
                mat[i].push_back(0);
                k--;
            }
            k++;
        }
        vector<int>h;
        for(int i=0;i<mat.size();i++)
        {
            int k=mat[i].size();
            while(k!=0)
            {
                int p=pow(10 , k-1);
                
            }
        }
        
        //------------ WORK OVER THIS CODE----------------->>
    }
};*/





class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0")
            return "0";
        
        unsigned carry = 0;
        std::string prod;
        for (int pos = 0, e = num1.size() + num2.size() - 1; pos != e; pos++) {
            int result = 0;
            for (int i = 0, j = pos; i < num1.size(); i++, j--) {
                if (j >= num2.size())
                    continue;
                
                int digit1 = num1[num1.size() - i - 1] - '0';
                int digit2 = num2[num2.size() - j - 1] - '0';
                result += digit1 * digit2;
            }
            
            result += carry;
            carry = result / 10;
            result %= 10;
            prod.push_back('0' + result);
        }
        
        if (carry)
            prod.push_back('0' + carry);
        
        std::reverse(prod.begin(), prod.end());
        return prod;
    }
};