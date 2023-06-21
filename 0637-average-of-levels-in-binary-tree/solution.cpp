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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        if (root == nullptr) {
            return ans;
        }
        deque<TreeNode*> storage;
        storage.push_back(root);
    
        while (!storage.empty()) {
            double current_value;
            long long int size = storage.size();
            long long int current_sum = 0;
            for (int i = 0; i < size; i++) {
                TreeNode* CurrentNode = storage.front();
                storage.pop_front();
                current_sum += CurrentNode -> val;
                if (CurrentNode->left != nullptr) {
                    storage.push_back(CurrentNode->left);
                }
                if (CurrentNode->right != nullptr) {
                    storage.push_back(CurrentNode->right);
                }
            }
            ans.push_back(current_sum / (double) size);
            }
        return ans;
    }
};
