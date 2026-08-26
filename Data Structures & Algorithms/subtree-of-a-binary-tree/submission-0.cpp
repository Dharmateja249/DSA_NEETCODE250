class Solution {
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (!subRoot) return true;
        if (!root) return false;
        
        if (sametree(root, subRoot)) {
            return true;
        }
        
        // Fixed typo: changed isSubTree to isSubtree
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }

    bool sametree(TreeNode* root, TreeNode* subRoot) {
        if (!root && !subRoot) {
            return true;
        }
        if (root && subRoot && root->val == subRoot->val) {
            return sametree(root->left, subRoot->left) && sametree(root->right, subRoot->right);
        }
        return false;
    }
};