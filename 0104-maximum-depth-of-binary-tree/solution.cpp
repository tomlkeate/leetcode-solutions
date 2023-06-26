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
 // breadth first search solution
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (!root)
            return 0;
        deque<TreeNode*> storage;
        storage.push_back(root);
        int longestPath = 0;
        while (!storage.empty()) {
            longestPath++;
            const int size = storage.size();
            for (int i = 0; i<size; i++) {
                TreeNode* current = storage.front();
                storage.pop_front();
                if (current->left)
                    storage.push_back(current->left);
                if (current->right)
                    storage.push_back(current->right);
            }
        }
        return longestPath;
    }
};
