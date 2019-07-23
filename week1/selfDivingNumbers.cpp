class Solution {
public:
  bool isSelfDividing(int num) {
    int temp = num;
    while(temp > 0) {
      int d = temp % 10;
      temp /= 10;
      if(d == 0 || (num % d) > 0)
        return false;
    }
    return true;
  }
  
  vector<int> selfDividingNumbers(int left, int right) {
    vector<int> ans;
    for(int i = left; i <= right; i++) {
      if(isSelfDividing(i))
        ans.push_back(i);
    }
    return ans;
  }
};
