class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int length = mat.size();
        int sum = 0;
        for (int row = 0, primary_diagonal = 0; row < length; row++, primary_diagonal++) {
            if (primary_diagonal == length - primary_diagonal - 1) {
                sum += mat[row][primary_diagonal]; 
                continue;
            }
            sum = sum + mat[row][primary_diagonal] + mat[row][length - primary_diagonal - 1];
        }
        return sum;
    }
};
