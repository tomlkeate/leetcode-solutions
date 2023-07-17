class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if (m*n != original.size()) {
            return {};
        }
        vector<vector<int>> ans(m, vector<int>(n));
        for (int row = 0; row < m; row++) {
            ans[row] = { original.begin() + (row*n), original.begin() + (row*n) + n };
        }
        return ans;
    }
};
