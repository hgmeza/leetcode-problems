// class Solution {
// public:
//   bool isPowerOfTwo(int n) {
//     if(n < 1) return false;
//     if(n == 1 || n == 2) return true;
//     if(fmod((log(n)/log(2)), 1) == 0) return true;
//     return false;
//   }
// };
// better solution: bitwise operations
class Solution {
public:
  bool isPowerOfTwo(int n) {
    return (n > 0) && (!(n & (n-1)));
  }
};
