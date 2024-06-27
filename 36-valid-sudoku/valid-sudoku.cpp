class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
       const int n = 9; 
        bool row[n][n] = {false};
        bool col[n][n] = {false};
        bool square[n][n] = {false};

        for (int i = 0; i < n; i++ ){
            for (int j = 0; j < n; j++){
                if (board[i][j] != '.') {
                    int idx = board[i][j]  - '0' - 1;
                    int area = (i/3) *3 +  (j/3); 
                    if (row[i][idx] || col[j][idx] || square[area][idx])
                        return false;

                         row[i][idx] = true;
                col[j][idx] = true;
                square[area][idx] = true;
                }
            }
        }    
        return true;
    }
};