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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*>q;
        vector<vector<int>>ans;
        if(root==nullptr){
            return ans;
        }
        
        q.push(root);
        while(!q.empty()){{
            int size=q.size();
            vector<int>ds;
            while(size>0){
                TreeNode*node=q.front();
                q.pop();
                ds.push_back(node->val);
                if(node->left!=nullptr)q.push(node->left);
                if(node->right!=nullptr)q.push(node->right);
                size--;
            }
            ans.push_back(ds);
        }

        }
        return ans;
        
    }
};
