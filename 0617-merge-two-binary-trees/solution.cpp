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
    TreeNode * mergeTrees(TreeNode* root1, TreeNode* root2) {
        if (!root1 && !root2) {
            return nullptr;
        }
        if (!root1 || !root2) {
            return (root1) ? root1 : root2;
        }
        queue<TreeNode*> Queue1, Queue2;
        Queue1.push(root1);
        Queue2.push(root2);
        while (!Queue1.empty() && !Queue2.empty()) {
            TreeNode* current1(Queue1.front());
            TreeNode* current2(Queue2.front());
            Queue1.pop();
            Queue2.pop();

            current1->val += current2->val;

            if (current1->left && current2->left) {
                Queue1.push(current1->left);
                Queue2.push(current2->left);
            } else if (!current1->left && current2->left) {
                current1->left = current2->left;
            }

            if (current1->right && current2->right) {
                Queue1.push(current1->right);
                Queue2.push(current2->right);
            } else if (!current1->right && current2->right) {
                current1->right = current2->right;
            }
        }
        return root1;
    }
    // TreeNode * mergeTrees(TreeNode* root1, TreeNode* root2) {
    //     if (!root1 && !root2) {
    //         return nullptr;
    //     }
    //     if (!root1) {
    //         return root2;
    //     } else if (!root2) {
    //         return root1;
    //     }
    //     stack<TreeNode*> stack1, stack2;
    //     stack1.push(root1);
    //     stack2.push(root2);
    //     while (!stack1.empty()) {
    //         TreeNode* current1(stack1.top());
    //         TreeNode* current2(stack2.top());
    //         stack1.pop();
    //         stack2.pop();

    //         current1->val += current2->val;
    //         if (current1->left !=  nullptr && current2->left != nullptr) {
    //             stack1.push(current1->left);
    //             stack2.push(current2->left);
    //         } else if (current1->left == nullptr && current2->left != nullptr) {
    //             current1->left = current2->left;
    //         }

    //         if (current1->right != nullptr && current2->right != nullptr) {
    //             stack1.push(current1->right);
    //             stack2.push(current2->right);
    //         } else if (current1->right == nullptr && current2->right != nullptr) {
    //             current1->right = current2->right;
    //         }
            
    //     }
    //     return root1;
    // }
    // TreeNode * mergeTrees(TreeNode* root1, TreeNode* root2) {
    //     if (!root1 && !root2) {
    //         return nullptr;
    //     }
        
    //     if (!root1) {
    //         return root2;
    //     } else if (!root2) {
    //         return root1;
    //     }
    //     root1->val += root2->val;
    //     root1->left = mergeTrees(root1->left, root2->left);
    //     root1->right = mergeTrees(root1->right, root2->right);
    //     delete root2;
    //     return root1;
    // }
    // void dfs(TreeNode* root1, TreeNode* root2, TreeNode* &root) {
    //     if (!root1 && !root2) {
    //         return;
    //     }
    //     if (!root1 && root2) {
    //         TreeNode* node = new TreeNode(root2->val);
    //         root = node;
    //         dfs(root1, root2->left, root->left);
    //         dfs(root1, root2->right, root->right);
    //     }
    //     else if (root1 && !root2) {
    //         TreeNode* node = new TreeNode(root1->val);
    //         root = node;
    //         dfs(root1->left, root2, root->left);
    //         dfs(root1->right, root2, root->right);
    //     }
    //     else {
    //         TreeNode* node = new TreeNode(root1->val + root2->val);
    //         root = node;
    //         dfs(root1->left, root2->left, root->left);
    //         dfs(root1->right, root2->right, root->right);
    //     }
    // }
    // TreeNode * mergeTrees(TreeNode* root1, TreeNode* root2) {
    //     TreeNode* root(nullptr);
    //     dfs(root1, root2, root);
    //     return root;
    // }
};
