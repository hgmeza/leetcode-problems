class Solution {
public:
  int numJewelsInStones(string J, string S) {
    unordered_map<char, int> stones;
    for(char c : S) {
      stones[c]++;
    }
    int count = 0;
    for(char c : J) {
      count += stones[c];
    }
    return count;
  }
};
