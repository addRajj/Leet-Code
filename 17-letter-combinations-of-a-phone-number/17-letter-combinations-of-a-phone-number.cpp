


class Solution {
private:
    map<char, string>mapping = {
        {'2', "abc"},
        {'3', "def"},
        {'4', "ghi"},
        {'5', "jkl"},
        {'6', "mno"},
        {'7', "pqrs"},
        {'8', "tuv"},
        {'9', "wxyz"},
    };   
    
private:
    void recursion(int index, int size, string combination, vector<string>&ans, string &digits)
    {
        for(int i = index; i < size; ++i)
        {
            for(auto &ch : mapping[digits[i]])
            {
                recursion(i + 1, size, combination + ch , ans, digits);
                string temp = combination + ch;
                if(temp.size() == size)
                    ans.push_back(temp);                    
            }
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        int size = digits.size();
        vector<string>ans;
        recursion(0, size, "", ans, digits);
        return ans;
    }
};
