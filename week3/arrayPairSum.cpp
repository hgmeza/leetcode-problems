class Solution {
public:
  int arrayPairSum(vector<int>& nums) {
    int pairs = nums.size() / 2;
    sort(nums.begin(), nums.end());
    int sum = 0;
    
    for(int i = 0; i < nums.size(); i+=2) {
      sum +=  min(nums[i], nums[i+1]);
      // or
      // sum += num[i] as it is guaranteed that num[i+1] is bigger
    }
    return sum;
  }
};
