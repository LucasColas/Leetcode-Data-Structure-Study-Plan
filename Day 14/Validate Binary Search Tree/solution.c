/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool checkTree(struct TreeNode * root, long min, long max)
{
    if (!root) {
        return true;
    }
    
    if (root->val <= min || root->val >= max) {
        return false;
    
    }
    
    return checkTree(root->left, min, root->val) && checkTree(root->right, root->val, max);
}

bool isValidBST(struct TreeNode* root) {
    return checkTree(root,LONG_MIN, LONG_MAX);
}
