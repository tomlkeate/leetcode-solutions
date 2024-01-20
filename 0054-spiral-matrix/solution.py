class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        if len(matrix) < 1:
            return []
        directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]
        directionIdx = 0
        row, col = 0, 0
        outputMatrix = []
        seen = set()
        for _ in range(len(matrix) * len(matrix[0])):
            outputMatrix.append(matrix[row][col])
            seen.add((row, col))
            nextRow, nextCol = row + directions[directionIdx][0], col + directions[directionIdx][1]
            if (
                nextRow < 0
                or nextRow >= len(matrix)
                or nextCol < 0
                or nextCol >= len(matrix[0])
                or (nextRow, nextCol) in seen
            ):
                directionIdx = (directionIdx + 1) % 4
            row += directions[directionIdx][0]
            col += directions[directionIdx][1]
        return outputMatrix
