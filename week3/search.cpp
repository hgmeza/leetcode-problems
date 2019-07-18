class Solution {
public:
  int search(vector<int>& nums, int target) {
    int start = 0;
    int last = nums.size() - 1;
    
    while(start <= last) {
      int mid = (last + start) / 2;
      if(nums[mid] == target)
        return mid;
      else if(nums[mid] < target)
        start = mid + 1;
      else 
        last = mid - 1;
    }
    return -1;
  }
};
