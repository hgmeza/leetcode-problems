class Solution {
public:
  int peakIndexInMountainArray(vector<int>& A) {
    int start = 0;
    int end = A.size()-1;
    
    while(start!=end){
      int mid = (start + end) / 2;
      if(A[mid] > A[mid + 1])
        end = mid;
      else
        start = mid = 1;
    }
    return start;
  }
};
