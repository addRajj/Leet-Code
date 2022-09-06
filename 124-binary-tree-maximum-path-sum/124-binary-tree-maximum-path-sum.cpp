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
    int maxPathSum(TreeNode* root) {
        
        int maxi=root->val;
        findmax(root , maxi);
        return maxi;
        
    }
    private:
    int findmax(TreeNode* root , int &maxi)
    {
        if(root==NULL)
            return 0;
        
        int lh=findmax(root->left , maxi);if(lh<0)lh=0;
        int rh=findmax(root->right , maxi);if(rh<0)rh=0;
        
        maxi=max(maxi , (lh+rh+root->val));
        
        return root->val + max(lh  , rh);
    }
};