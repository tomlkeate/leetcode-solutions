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
    TreeNode* invertTree(TreeNode* root) {
        if (!root) {
            return nullptr;
        }
        std::stack<TreeNode*> st;
        st.push(root);
        while (!st.empty()) {
            TreeNode* node = st.top();
            TreeNode* temp = node->left;
            node->left = node->right;
            node->right = temp;
            st.pop();
            if (node->left) {
                st.push(node->left);
            }
            if (node->right) {
                st.push(node->right);
            }
        }
        return root;
        // TreeNode* temp = root->left;
        // root->left = invertTree(root->right);
        // root->right = invertTree(temp);
        // return root;
    }
};
