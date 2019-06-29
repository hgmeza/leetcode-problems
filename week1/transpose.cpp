class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
      vector<vector<int>> res = A;
      res.resize(A[0].size());
      for(int k=0;k<res.size();k++){
        res[k].clear();
      }

      for(int i=0;i<A.size();i++){
        for(int j=0;j<A[0].size();j++){
          res[j].push_back(A[i][j]);
        }
      }
      return res;
    }
};
