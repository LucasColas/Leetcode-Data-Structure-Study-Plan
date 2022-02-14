/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

void p_traversal(struct TreeNode* root, int* array, int* index) {
    if (root == NULL) {
        return;
    }
    
    array[(*index)++] = root->val;
    p_traversal(root->left, array, index);
    p_traversal(root->right, array, index);
}

int* preorderTraversal(struct TreeNode* root, int* returnSize){
    int* array = (int* )malloc(10000*sizeof(int));
    *returnSize = 0;
    p_traversal(root, array, returnSize);
    return array;
    
}
