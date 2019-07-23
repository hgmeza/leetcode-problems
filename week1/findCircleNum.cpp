class Solution {
public:
	int findCircleNum(vector<vector<int>>& M) {
		int res = 0;
		int size = M.size();
		for (int i = 0; i < size; i++) {
      if (M[i][i] == 1) {
        findCircleHelper(M, i, i);
        res++;
      }
    }
		return res;
	}
	
	void findCircleHelper(vector<vector<int>>& M, int i,int j) {
		M[i][j] = 0;
		M[j][i] = 0;
		M[i][i] = 0;
		
		for (int n = 0; n < M[0].size(); n++) {
			if (M[i][n] == 1)
				findCircleHelper(M, n, i);
		}
	}
};
