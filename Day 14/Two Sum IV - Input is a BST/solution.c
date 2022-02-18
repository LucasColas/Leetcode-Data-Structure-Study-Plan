/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int id = 0;
void get_values(struct TreeNode* root, int* nums) {
    if (!root) {
        return;
    }
    nums[id++] = root->val;
    get_values(root->left, nums);
    get_values(root->right, nums);
    
}


bool findTarget(struct TreeNode* root, int k){
    int *nums = malloc(10000 * sizeof(int));
    id = 0;
    get_values(root, nums);
    //printf("%d", id);
    
    for (int i = 0; i < id; i++) {
        //printf("%d", nums[i]);
        for (int j = i+1; j < id; j++) {
            /*
            printf("index i : ");
            printf("%d", i);
            printf(" index j : ");
            printf("%d", j);
            printf("     ");
            printf("%d", nums[i]);
            printf(" ");
            printf("%d", nums[j]);
            printf("\n");
            */
            if ((nums[i] + nums[j]) == k) {
                return true;
            }
        }
    }
    return false;
}
