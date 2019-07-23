class Solution {
public:
  bool isHappy(int n) {
    unordered_set<int> set;
    while(set.find(n) == set.end()){
      set.insert(n);
      int sum = 0;
      while(n != 0){
        int digit = n % 10;
        n /= 10;
        sum += pow(digit, 2);
      }
      n = sum;
      if(sum == 1) return true;
    }
    return false;
  }
};
