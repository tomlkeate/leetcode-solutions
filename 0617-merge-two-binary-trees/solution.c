/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* mergeTrees(struct TreeNode* root1, struct TreeNode* root2){
    if (root1 != NULL && root2 != NULL) {
        struct TreeNode* newNode = malloc(sizeof(struct TreeNode));
        newNode->val = root1->val + root2->val;
        newNode->left = mergeTrees(root1->left, root2->left);
        newNode->right = mergeTrees(root1->right, root2->right);
        return newNode;
    } else {
        return root1 ? root1 : root2;
    }
}
