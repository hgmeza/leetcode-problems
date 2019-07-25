class Solution {
 public:
  bool check(set<char>& dc, char x) {
    if (dc.count(x)) 
      return false;
    if (x != '.') 
      dc.insert(x);
    return true;
  }

  bool isValidSudoku(vector<vector<char>>& board) {
    // for every row and column
    for (int i = 0; i < 9; i++) {
      set<char> dc1;
      set<char> dc2;
      for (int j = 0; j < 9; j++) {
        if (!check(dc1, board[i][j])) 
          return false;
        if (!check(dc2, board[j][i]))
          return false;
      }
    }

    // for every 3 x 3 block
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        set<char> dc;
        for (int k = 0; k < 3; k++)
          for (int m = 0; m < 3; m++)
            if (!check(dc, board[3 * i + k][3 * j + m])) 
              return false;
      }
    }
    return true;
  }
};
