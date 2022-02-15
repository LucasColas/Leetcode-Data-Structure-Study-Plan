/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool check_subtree(struct TreeNode* subtree1, struct TreeNode* subtree2) {
    if (!subtree1 && !subtree2) {
        return true;
    }
    
    if (!subtree1 || !subtree2 || subtree1->val != subtree2->val) {
        return false;
    }
    
    return check_subtree(subtree1->left, subtree2->right) && check_subtree(subtree1->right, subtree2->left);
}

bool isSymmetric(struct TreeNode* root){
    return check_subtree(root->left, root->right);

}
