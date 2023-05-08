class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int row = 0; row < 9; row++) {
            for (int column = 0; column < 9; column++) {
                if (board[row][column] != '.') {
                    for (int search_row = row + 1; search_row < 9; search_row++) {
                        if (board[search_row][column] == board[row][column]) return false;
                    } 
                    for (int search_column = column + 1; search_column < 9; search_column++) {
                        if (board[row][search_column] == board[row][column]) return false;
                    }
                    for (int search_box_row = row - (row % 3); search_box_row <= row + (2 - (row % 3)); search_box_row++) {
                        for (int search_box_col = column - (column % 3); search_box_col <= column + (2 - (column % 3)); search_box_col++) {
                            if (search_box_row == row && search_box_col == column) continue;
                            if (board[search_box_row][search_box_col] == board[row][column]) return false;
                        }
                    }
                }
            }
        }
        return true;
    }
};
