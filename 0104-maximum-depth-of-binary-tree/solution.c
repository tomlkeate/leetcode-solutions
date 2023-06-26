/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int Max(int first, int second, int third) {
    if (first > second && first > third) {
        return first;
    } else if (second > first && second > third) {
        return second;
    } else if (third > second && third > first) {
        return third;
    }
    return second;
}
int findMaxDepth(struct TreeNode* root, int maxDepth) {
    if (!root)
        return maxDepth;
    return Max(maxDepth, findMaxDepth(root->left, maxDepth + 1), findMaxDepth(root->right, maxDepth + 1));

}
int maxDepth(struct TreeNode* root){
    if (!root)
        return 0;
    return findMaxDepth(root, 0);
}
