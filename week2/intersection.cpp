class Solution {
public:
  vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> s1(nums1.begin(), nums1.end());
    unordered_set<int> s2(nums2.begin(), nums2.end());

    vector<int> ret;
    if (s1.size() > s2.size()) 
      swap(s1, s2);
    for (auto n : s1) {
      if (s2.count(n)) {
        s2.erase(n);
        ret.push_back(n);
      }
    }
    return ret;
  }
};
