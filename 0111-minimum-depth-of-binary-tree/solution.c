/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int minDepth(struct TreeNode* root){
    if (!root)
        return 0;
    int left = minDepth(root->left);
    int right = minDepth(root->right);
    return (left == 0 || right == 0)? left+right+1 : (left < right)? left + 1 : right + 1;
}
