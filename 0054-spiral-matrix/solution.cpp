class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        if (matrix.empty() || matrix[0].empty()) return result;
        int top_row = 0, bottom_row = matrix.size()-1, left_col = 0, right_col = matrix[0].size()-1;
        while (top_row <= bottom_row && left_col <= right_col) {
            for (int col = left_col; col <= right_col; col++) {
                result.push_back(matrix[top_row][col]);
            }
            top_row++;

            for (int row = top_row; row <= bottom_row; row++) {
                result.push_back(matrix[row][right_col]);
            }
            right_col--;

            if (top_row <= bottom_row) {
                for (int col = right_col; col >= left_col; col--) {
                    result.push_back(matrix[bottom_row][col]);
                }
                bottom_row--;
            }

            if (left_col <= right_col) {
                for (int row = bottom_row; row >= top_row; row--) {
                    result.push_back(matrix[row][left_col]);
                }
                left_col++;
            }
        } 
        return result;
    }
};
