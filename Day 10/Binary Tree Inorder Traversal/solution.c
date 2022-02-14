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
void traverse(struct TreeNode* root, int* array, int* index){
    if(root->left) {
        traverse(root->left,array,index);   
    }
    array[(*index)++]=root->val;
    if(root->right) {
        traverse(root->right,array,index);
    }
        
}

int* inorderTraversal(struct TreeNode* root, int* returnSize){
    int*array=malloc(100*sizeof(int));
    *returnSize=0;
    if(root)
        traverse(root,array,returnSize);
    //arr=realloc(arr,(*returnSize)*sizeof(int));
    return array;
}
