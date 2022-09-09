/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         vector<vector<int>> ans;
    if(root==NULL) return ans;
    int count=0;
    vector<int> temp;
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        int n=q.size();
        temp.clear();
        for(int i=0;i<n;i++){
            TreeNode* node=q.front();
            if(node->left != NULL){
                q.push(node->left);
            }
            if(node->right != NULL){
                q.push(node->right);
            }
            q.pop();
            temp.push_back(node->val);
        }
        count++;
        if(count%2==0){
            reverse(temp.begin(),temp.end());
        }
        ans.push_back(temp);
    }
    return ans;
        
    }
};