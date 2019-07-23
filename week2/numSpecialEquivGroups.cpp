class Solution {
public:
  int numSpecialEquivGroups(vector<string>& A) {
    std::unordered_set<std::string> s;
    for (string str : A) {
      int mid = str.size() / 2;
      for (int i = 0, j = mid + (mid + 1) % 2; j < str.size(); i += 2, j += 2) {
          swap(str[i], str[j]);
      }
      sort(str.begin(), str.begin() + mid);
      sort(str.begin() + mid, str.end());
      s.emplace(move(str));
    }
    return s.size();
  }
};
