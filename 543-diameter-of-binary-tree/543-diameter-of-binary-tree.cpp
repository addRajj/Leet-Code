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
    int diameterOfBinaryTree(TreeNode* root) {
        
        int dia=0;
        getdiameter(root , dia);
        return dia;
        
    }
    private:
    int getdiameter(TreeNode* root , int &dia)
    {
        if(root==NULL)
            return 0;
        
        int lh=getdiameter(root->left , dia);
        int rh=getdiameter(root->right , dia);
        dia=max(dia, lh+rh);
        return 1+max(lh , rh);
    }
};