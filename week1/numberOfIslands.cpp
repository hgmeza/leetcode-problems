class Solution {
public:
  int numIslands(vector<vector<char>>& grid) {
    if (grid.empty() || grid[0].empty())
      return 0;

    int islandNum = 0;
    for (int i = 0; i < grid.size(); i++) {
      for (int j = 0; j < grid[0].size(); j++) {
        if (grid[i][j] == '1') {
          getNeighbor(grid, i, j);
          islandNum++;
        }
      }
    }
    return islandNum;
  }
    
private:
  void getNeighbor(vector<vector<char>>& grid, int i, int j) {
    if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] != '1')
      return;

    grid[i][j] = '0';
    getNeighbor(grid, i + 1, j);
    getNeighbor(grid, i - 1, j);
    getNeighbor(grid, i, j + 1);
    getNeighbor(grid, i, j - 1);
  }
};
