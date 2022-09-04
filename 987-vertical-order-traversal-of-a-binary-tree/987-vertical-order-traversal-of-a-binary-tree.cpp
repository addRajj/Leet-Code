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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        map<int , map<int , multiset<int>>>mp;
        queue<pair<TreeNode* , pair<int , int>>>q;
        
        q.push({ root , {0 , 0} } );
        
        while(q.size()!=0)
        {
        
            auto p=q.front();
            q.pop();
            TreeNode* newnode=p.first;
            int x=p.second.first;
            int y=p.second.second;
            
            mp[x][y].insert(newnode->val);
            
            if(newnode->left)
            {
                q.push( { newnode->left  , {x-1 , y+1}});
            }
            if(newnode->right)
            {
                q.push({newnode->right , {x+1, y+1}}); 
            }
                
        }
          vector<vector<int>>mat;
          for(auto p:mp)
        {
            vector<int>v;
            for(auto x:p.second)
            {
                v.insert(v.end() , x.second.begin() , x.second.end());           
            }
            mat.push_back(v);
        }
                       
        return mat;
                       
    }
};