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
bool same(TreeNode*x,TreeNode*y){
    if (x == nullptr && y == nullptr) {
            return true;
        }
    if(x==nullptr||y==nullptr){
        return (x==y);
    }
    if(x->val!=y->val){
        return false;
    }
    return same(x->left,y->left)&&
    same(x->right,y->right);

}
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return same(p,q);

        
    }
};
