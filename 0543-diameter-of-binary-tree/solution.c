/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int max(int num1, int num2) {
    return num1 > num2 ? num1 : num2;
}
int getMaxDepth(struct TreeNode* root, int *length) {
    if (root == NULL) 
        return 0;
    int totalLeft = getMaxDepth(root->left, length);
    int totalRight = getMaxDepth(root->right, length);
    *length = max(*length, totalLeft + totalRight);
    return max(totalLeft, totalRight) + 1;
}
int diameterOfBinaryTree(struct TreeNode* root){
    int answer = 0;
    getMaxDepth(root, &answer);
    return answer;
}
