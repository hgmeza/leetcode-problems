class Solution {
public:
  void solve(vector<vector<char>>& board) {
    if(board.empty()) return;
    int m = board.size(), n = board[0].size();
    queue<pair<int,int>> path;
    for(int i=0;i<m;i++){ 
      if(board[i][0]=='O') path.push(pair<int,int>(i,0));
      if(board[i][n-1]=='O') path.push(pair<int,int>(i,n-1));
    }
    for(int j=0;j<n;j++){
      if(board[0][j]=='O') path.push(pair<int,int>(0,j));
      if(board[m-1][j]=='O') path.push(pair<int,int>(m-1,j));
    }
    while(!path.empty()){
      pair<int,int> tmp = path.front();
      path.pop();
      int i = tmp.first, j = tmp.second;
      board[i][j] = 'M';
      if(i>0 && board[i-1][j]=='O') path.push(pair<int,int>(i-1,j));
      if(i<m-1 && board[i+1][j]=='O') path.push(pair<int,int>(i+1,j));
      if(j>0 && board[i][j-1]=='O') path.push(pair<int,int>(i,j-1));
      if(j<n-1 && board[i][j+1]=='O') path.push(pair<int,int>(i,j+1));
    }
    for(int i=0;i<m;i++) for(int j=0;j<n;j++){
      if(board[i][j]=='O') board[i][j]='X';
      else if(board[i][j]=='M') board[i][j]='O';
    }
    return;
  }
};
