class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        std::unordered_map<int, bool> hashRow, hashCol;
        for (int row = 0; row < matrix.size(); row++) {
            for (int col = 0; col < matrix[0].size(); col++) {
                if (matrix[row][col] == 0) {
                    hashRow[row] = true;
                    hashCol[col] = true;
                }
            }
        }
        for (int row = 0; row < matrix.size(); row++) {
            for (int col = 0; col < matrix[0].size(); col++) {
                if (hashRow.count(row) || hashCol.count(col)) {
                    matrix[row][col] = 0;
                }
            }
        }
    }
};
