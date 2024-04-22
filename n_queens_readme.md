# N-Queens Problem

## Description
- The N-Queens Problem can be solved using the Backtracking Strategy. The aim is to place n queens on an n x n chessboard such that no two queens threaten each other. That is, no two queens share the same row, column, or diagonal.
- The bounding function of the problem checks if it is possible to place n queens on the board without any of them threatening each other. If it's not possible, the partial solution is pruned and backtracked.
- The constraints involve ensuring that no two queens share the same row, column, or diagonal. These constraints are checked as queens are placed on the board, and if a conflict is detected, the partial solution is pruned and backtracked.

## Algorithm
### 1. Function `place(k, i)`
 - Inputs: `k` represents the current row being considered, and `i` represents the column to be checked for placing a queen.
- Output: Returns true if a queen can be placed at position (k, i) without conflicting with previously placed queens, false otherwise.
- Iterate over all previously placed queens (from 1 to k-1) and check if the current position conflicts with any of them:
  - If the current position is in the same column as a previous queen (`x[j] == i`), or
  - If the current position is in the same diagonal as a previous queen (`abs(x[j] - i) == abs(j - k)`), indicating a diagonal conflict.
- Return true if no conflicts are found, indicating that a queen can be placed at the current position without attacking other queens.

### 2. Function `Nqueens(k, n)`
- Inputs: `k` represents the current row being processed, and `n` is the total number of rows/columns (size of the chessboard).
- Recursively attempts to place queens on each row starting from row 1 up to row n.
- For each row, iterates over all columns (from 1 to n) and checks if placing a queen at that position is valid using the `place` function.
- If a valid position is found (`place(k, i)` returns true), marks that position as a queen (`x[k] = i`) and recursively calls `Nqueens(k + 1, n)` to move to the next row.
- If all queens are successfully placed (`k == n`), prints the arrangement of queens as a solution.
- Backtracks by undoing the placement of the queen and exploring other positions if no valid position is found for a given row.

### 3. Main Function
- Takes input for the number of queens (`n`).
- Calls the `Nqueens` function to start the recursive search for solutions.
- Prints solutions found during the recursive search.

## Time Complexity
For the N-Queens problem algorithm using backtracking, the time complexity is as follows:
- Best-case time complexity: O(1) when the solution is found quickly (rare in practice).
- Average-case time complexity: O(n!) for typical scenarios where backtracking explores various possibilities.
- Worst-case time complexity: O(n!) when backtracking explores all possibilities extensively.
