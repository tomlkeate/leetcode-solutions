/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if (!root)
            return 0;
        stack<TreeNode*> nodeStack;
        map<TreeNode*, int> depth;
        nodeStack.push(root);
        int level = 0;
        while (!nodeStack.empty()) {
            TreeNode* currentNode = nodeStack.top();
            if (currentNode->left && depth.find(currentNode->left) == depth.end()) {
                nodeStack.push(currentNode->left);
            } else if (currentNode->right && depth.find(currentNode->right) == depth.end()) {
                nodeStack.push(currentNode->right);
            } else {
                nodeStack.pop();
                int left = depth[currentNode->left];
                int right = depth[currentNode->right];
                depth[currentNode] = max(left, right) + 1;
                level = max(level, left + right);
            }
        }
        return level;
    }
};
