/**
 * @param {character[][]} board
 * @return {number}
 */
var countBattleships = function(board) {
    let count = 0;
    for (let row = 0; row < board.length; row++) {
        for (let col = 0; col < board[0].length; col++) {
            if (board[row][col] == '.') continue;
            if (row + 1 < board.length && board[row + 1][col] == 'X') continue;
            if (col + 1< board[0].length && board[row][col + 1] == 'X') continue;
            count++;
        }
    }
    return count;
};
