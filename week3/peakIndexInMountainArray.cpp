class Solution {
public:
  int peakIndexInMountainArray(vector<int>& A) {
    int low = 0;
    int high = A.size();

    while(low < high) {
      int mid = (low + high) / 2;
      if(A[mid] > A[mid + 1])
        high = mid;
      else 
        low = mid + 1;
    }
    return high;
  }
};