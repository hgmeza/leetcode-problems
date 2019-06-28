class Solution {
public:
  vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> res;
    unordered_map<int, int> hashmap;
    int index = -1;
    
    for(auto num:nums) {
      index++;
      if(hashmap.count(target-num) > 0) {
        res.push_back(hashmap[target-num]);
        res.push_back(index);
        break;
      }
      else
        hashmap.insert(make_pair(num, index));
    }
    return res;
  }
};
