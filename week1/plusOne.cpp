class Solution {
public:
  vector<int> plusOne(vector<int>& digits) {
    int n = digits.size();
    int carry = 1;
    int sum = 0;
    int num = 0;
    vector<int> ret;
    
    for (int i = n - 1; i >= 0; i--) {
      num = digits[i] + carry;
      carry = num / 10;
      num = num % 10;
      ret.push_back(num);
    }
    
    if (carry) ret.push_back(carry);
    reverse(ret.begin(), ret.end());
    
    return ret;
  }
};
