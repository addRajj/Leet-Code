/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    
        
            vector<vector<int>> levelOrder(Node* root) {
        if (!root) return {};

        vector<vector<int>> ans;
        stack<pair<Node*, int>> st;
        st.push({root, 0});
        while (!empty(st)) {
            const auto [node, level] = st.top(); st.pop();

            if (level == size(ans)) {
                ans.push_back({node->val});
            } else {
                ans[level].push_back(node->val);
            }
            // NB: We need to push them in reverse order.
            for (auto it = crbegin(node->children); it != crend(node->children); ++it) {
                st.push({*it, level + 1});
            }
        }
        return ans;
    }

        

};