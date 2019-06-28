class Solution {
public:
  int binaryGap(int N) {
  int maxi = 0;
  for (int i = 0; i < 31; ++i){
    if (N & 1 << i){
      for (int j = i + 1; j < 32; ++j){
        if (N & 1 << j){
          maxi=max(j - i, maxi);
          break;
        }
      }
    }
  }
  return maxi;
  }
};
