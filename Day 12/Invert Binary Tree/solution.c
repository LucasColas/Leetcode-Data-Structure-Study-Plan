/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* invertTree(struct TreeNode* root){
    if (!root) {
        return root;
    }
    struct TreeNode* right = invertTree(root->right);
    struct TreeNode* left = invertTree(root->left);
    root->left = right;
    root->right = left;
    return root;
    
    
}
