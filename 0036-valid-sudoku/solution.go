func isValidSudoku(board [][]byte) bool {
    rows := make([]int, 9)
    cols := make([]int, 9)
    squares := make([]int, 9)

    for r := 0; r < 9; r++ {
        for c := 0; c < 9; c++ {
            if board[r][c] == '.' {
                continue
            }
            val := board[r][c]
            squareIdx := (r/3)*3 + c/3

            mask := 1 << val
            if (rows[r] & mask) != 0 || (cols[c] & mask) != 0 || 
               (squares[squareIdx] & mask) != 0 {
                return false
            }

            rows[r] |= mask
            cols[c] |= mask
            squares[squareIdx] |= mask
        }
    }

    return true
}
