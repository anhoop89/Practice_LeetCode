class Solution {
public:
    
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = 9; // Sudoku board size is 9x9

        // 2D vectors to keep track of occurrences of digits in rows, columns, and sub-grids
        vector<vector<bool>> row(n, vector<bool>(n, false));
        vector<vector<bool>> col(n, vector<bool>(n, false));
        vector<vector<bool>> square(n, vector<bool>(n, false));

        for (int i = 0; i < n; i++) { // Iterate over each row
            for (int j = 0; j < n; j++) { // Iterate over each column
                if (board[i][j] != '.') { // If the cell is not empty
                    int idx = board[i][j] - '1'; // Convert the char digit to an index (0-8)
                    int area = (i / 3) * 3 + (j / 3); // Calculate the index for the 3x3 sub-grid

                    // Check if the number already exists in the current row, column, or 3x3 sub-grid
                    if (row[i][idx] || col[j][idx] || square[area][idx]) {
                        return false; // If it exists, the board is invalid
                    }

                    // Mark the number as seen in the current row, column, and 3x3 sub-grid
                    row[i][idx] = true;
                    col[j][idx] = true;
                    square[area][idx] = true;
                }
            }
        }

        return true; // If no duplicates are found, the board is valid
    }   
};